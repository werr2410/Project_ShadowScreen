#include "shadowwindow.h"
#include "ui_shadowwindow.h"

ShadowWindow::ShadowWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ShadowWindow) {
    ui->setupUi(this);

    // image
    image_computer      = QPixmap("png/computer.png").scaled(71, 41);
    image_profile       = QPixmap("png/user.png").scaled(71, 41);
    image_search        = QPixmap("png/search.png").scaled(71, 41);

    image_review_bad    = QPixmap("png/review-bad.png").scaled(140, 140);
    image_review_normal = QPixmap("png/review-normal.png").scaled(140, 140);
    image_review_great  = QPixmap("png/review-great").scaled(140, 140);


    // set low image
    ui->label_IMAGE_Seacrh      ->setPixmap(image_search);
    ui->label_IMAGE_myComputer  ->setPixmap(image_computer);
    ui->label_IMAGE_profile     ->setPixmap(image_profile);

    // set Detail image

    // ui's
    regist      = new RegistrationWindow(this);
    detailset   = new DetailSetWindow   (this);
    aboutme     = new UserDataWindow    (this);
    telegram    = new TelegramWindow    (this);
    bankcard    = new MyBankcardWindow  (this);
    review      = new MyReviewWindow    (this);
    delivery    = new MyDeliveryWindow  (this);
    reviewadd   = new ReviewWindow      (this);

    // regist
    connect(regist, &RegistrationWindow::registrationSuccess, this, &ShadowWindow::onRegistrationSuccess);  // regist   -> main

    // detail set
    connect(detailset, &DetailSetWindow::sendDetailInfo, this, &ShadowWindow::getDetailInfo);               //  detail  -> main
    connect(this, &ShadowWindow::SendDatainfo, detailset, &DetailSetWindow::receiveData);                   //  main    -> detail

    // about me
    connect(this, &ShadowWindow::SendAboutMe, aboutme, &UserDataWindow::getUserData);                       // main     -> aboutme
    connect(aboutme, &UserDataWindow::sendUserData, this,  &ShadowWindow::getAboutMe);                      // aboutme  -> main

    // telegram
    connect(this, &ShadowWindow::SendTelegram, telegram, &TelegramWindow::getTelegram);                     // main     -> telegram

    // my bankcard
    connect(bankcard, &MyBankcardWindow::sendToMainBankcard, this, &ShadowWindow::getBankcard);             // bankcard -> main

    // my review
    connect(this, &ShadowWindow::SendReview, review, &MyReviewWindow::getCountMark);                        //  main    -> review

    // my delivery
    connect(this, &ShadowWindow::SendDelivery, delivery, &MyDeliveryWindow::getDeliveryList);               // main     -> delivery
    connect(delivery, &MyDeliveryWindow::setDeliveryList, this, &ShadowWindow::SendDelivery);               // delivery -> main

    // review
    connect(reviewadd, &ReviewWindow::SendReview, this, &ShadowWindow::getReviewUI);                        // review   -> main

    // anytime always regist/login
    regist->show();
}

ShadowWindow::~ShadowWindow() {
    delete regist;
    delete detailset;
    delete aboutme;
    delete telegram;
    delete bankcard;
    delete review;
    delete delivery;
    delete reviewadd;

    delete ui;
}

void ShadowWindow::setUser(User user) {
    this->user = user;

    initComputer(user.getComputer());

    qDebug() << user.getComputer().toString();
}

void ShadowWindow::initComputer(Computer computer) {
    ui->label_manufacture_set_cpu           ->setText(computer.getCPU().getManufacturer());
    ui->label_manufacturer_set_gpu          ->setText(computer.getGPU().getManufacturer());
    ui->label_manufacturer_set_memorychip   ->setText(computer.getMemorychip().getManufacturer());
    ui->label_manufacturer_set_storage      ->setText(computer.getStorage().getModel());
    ui->label_manufacturer_set_baseboard    ->setText(computer.getBaseboard().getManufacturer());

    ui->label_IMAGE_baseboard               ->setPixmap(QPixmap(computer.getBaseboard().getImage().scaled(QSize(61, 41))));
    ui->label_IMAGE_cpu                     ->setPixmap(QPixmap(computer.getCPU().getImage().scaled(QSize(61, 41))));
    ui->label_IMAGE_gpu                     ->setPixmap(QPixmap(computer.getGPU().getImage().scaled(QSize(61, 41))));
    ui->label_IMAGE_memorychip              ->setPixmap(QPixmap(computer.getMemorychip().getImage().scaled(QSize(61, 41))));
    ui->label_image_storage                 ->setPixmap(QPixmap(computer.getStorage().getImage().scaled(QSize(61, 41))));
}

void ShadowWindow::setImageDetails() {
    ui->label_IMAGE_baseboard               ->setPixmap(QPixmap(user.getComputer().getBaseboard().getImage().scaled(QSize(61, 41))));
    ui->label_IMAGE_cpu                     ->setPixmap(QPixmap(user.getComputer().getCPU().getImage().scaled(QSize(61, 41))));
    ui->label_IMAGE_gpu                     ->setPixmap(QPixmap(user.getComputer().getGPU().getImage().scaled(QSize(61, 41))));
    ui->label_IMAGE_memorychip              ->setPixmap(QPixmap(user.getComputer().getMemorychip().getImage().scaled(QSize(61, 41))));
    ui->label_image_storage                 ->setPixmap(QPixmap(user.getComputer().getStorage().getImage().scaled(QSize(61, 41))));
}

void ShadowWindow::updateReviewImage()
{

}

void ShadowWindow::onRegistrationSuccess(QString username, QString password)
{
    user.setUsername(username);
    user.setPassword(password);

    initComputer(user.getComputer());

    qDebug() << user.getComputer().toString();

    qDebug() << user.getUsername();
    qDebug() << user.getPassword();

    ui->label_username_set->setText(user.getUsername());
}

void ShadowWindow::getDetailInfo(QString desc, QString status, QPixmap image, bool isSale, QString type) {
    Computer comp = user.getComputer();

    if(type == "cpu") {

        CPU obj = comp.getCPU();

        obj.setDescription(desc);
        obj.setStatus(status);
        obj.setImage(image);
        obj.setIsSale(isSale);

        comp.setCPU(obj);
    }
    else if (type == "gpu") {
        GPU obj = comp.getGPU();

        obj.setDescription(desc);
        obj.setStatus(status);
        obj.setImage(image);
        obj.setIsSale(isSale);

        comp.setGPU(obj);
    }
    else if (type == "diskdrive"){
        Storage obj = comp.getStorage();

        obj.setDescription(desc);
        obj.setStatus(status);
        obj.setImage(image);
        obj.setIsSale(isSale);

        comp.setStorage(obj);
    }
    else if (type == "Memorychip") {
        Memorychip obj = comp.getMemorychip();

        obj.setDescription(desc);
        obj.setStatus(status);
        obj.setImage(image);
        obj.setIsSale(isSale);

        comp.setMemorychip(obj);
    }
    else  {
        Baseboard obj = comp.getBaseboard();

        obj.setDescription(desc);
        obj.setStatus(status);
        obj.setImage(image);
        obj.setIsSale(isSale);

        comp.setBaseboard(obj);
    }

    user.setComputer(comp);

    setImageDetails();
}

void ShadowWindow::getAboutMe(User user) {
    this->user.setUsername(user.getUsername());
    this->user.setPassword(user.getPassword());

    this->user.setName(user.getName());
    this->user.setSurname(user.getSurname());
    this->user.setMiddlename(user.getMiddlename());

    this->user.setEmail(user.getEmail());
    this->user.setBirthDay(user.getBirthday());

    ui->label_username_set->setText(user.getUsername());
}

void ShadowWindow::getBankcard(QVector<Bankcard> bankcard) {
    user.setBankcard(bankcard);

    this->bankcard->close();
}

void ShadowWindow::getDelivery(QList<Data::Delivery> delivery) {
    user.setDelivery(delivery);

    this->delivery->close();
}

void ShadowWindow::getReviewUI(Data::Review review) {
    QList<Review> a = user.getReview();

    a.push_back(review);

    user.setReviews(a);

    float mark = 0;

    for(const Review &x : user.getReview())
        mark += x.getMark();

    if(user.getReview().length() != 0) mark /= user.getReview().length();

    ui->label_reviwcount_set->setText(QString().setNum(mark));
}

void ShadowWindow::on_pushButton_CPU_clicked() {
    Detail* dt = new CPU(user.getComputer().getCPU());
    DetailInfo* dtinfo = new CPU(user.getComputer().getCPU());
    emit SendDatainfo(dt, dtinfo);
    detailset->show();
}

void ShadowWindow::on_pushButton_GPU_clicked() {
    Detail* dt = new GPU(user.getComputer().getGPU());
    DetailInfo* dtinfo = new GPU(user.getComputer().getGPU());
    emit SendDatainfo(dt, dtinfo);
    detailset->show();

}

void ShadowWindow::on_pushButton_STORAGE_clicked() {
    Detail* dt = new Storage(user.getComputer().getStorage());
    DetailInfo* dtinfo = new Storage(user.getComputer().getStorage());
    emit SendDatainfo(dt, dtinfo);
    detailset->show();

}

void ShadowWindow::on_pushButton_MEMORYCHIP_clicked() {
    Detail* dt = new Memorychip(user.getComputer().getMemorychip());
    DetailInfo* dtinfo = new Memorychip(user.getComputer().getMemorychip());
    emit SendDatainfo(dt, dtinfo);
    detailset->show();
}

void ShadowWindow::on_pushButton_BASEBOARD_clicked() {
    Detail* dt = new Baseboard(user.getComputer().getBaseboard());
    DetailInfo* dtinfo = new Baseboard(user.getComputer().getBaseboard());
    emit SendDatainfo(dt, dtinfo);
    detailset->show();
}

void ShadowWindow::on_pushButton_AboutMe_clicked() {
   emit SendAboutMe(user);

    aboutme->show();
}

void ShadowWindow::on_pushButton_Telegram_clicked() {
    emit SendTelegram(user.getTelegram());

    telegram->show();
}

void ShadowWindow::on_pushButton_MyBankcard_clicked() {
    emit SendBankcard(user.getBankcard());

    bankcard->show();
}

void ShadowWindow::on_pushButton_MyReview_clicked() {
    int count = user.getReview().length();
    float res = 0.f;

    for(const auto &x : user.getReview())
       res += x.getMark();

    if(count != 0)
        res /= count;
    else
        res = 0;

    emit SendReview(count, res);

    review->show();
}

void ShadowWindow::on_pushButton_MyDelivery_clicked() {
    emit SendDelivery(user.getDelivery());

    delivery->show();
}

void ShadowWindow::on_pushButton_MyReview_2_clicked() {
    reviewadd->show();
}

void ShadowWindow::on_pushButton_HelpMe_clicked() {
    HelpmeWindow help;

    help.show();
}

void ShadowWindow::on_pushButton_Manual_clicked() {
    HelpmeWindow help;

    help.show();
}

