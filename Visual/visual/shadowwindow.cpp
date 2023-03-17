#include "shadowwindow.h"
#include "ui_shadowwindow.h"

ShadowWindow::ShadowWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ShadowWindow) {
    ui->setupUi(this);

    //image
    image_review_bad    = QPixmap(path_image_review_bad)    .scaled(120, 120);
    image_review_normal = QPixmap(path_image_review_normal) .scaled(120, 120);
    image_review_great  = QPixmap(path_image_review_great)  .scaled(120, 120);

    // ui's
    regist      = new RegistrationWindow(this);
    detailset   = new DetailSetWindow   (this);
    aboutme     = new UserDataWindow    (this);
    telegram    = new TelegramWindow    (this);
    bankcard    = new MyBankcardWindow  (this);
    review      = new MyReviewWindow    (this);
    delivery    = new MyDeliveryWindow  (this);
    reviewadd   = new ReviewWindow      (this);
    showimage   = new ImageShowWindow   (this);
    helpme      = new HelpmeWindow      (this);

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

    // image show
    connect(this, &ShadowWindow::SendImage, showimage, &ImageShowWindow::getPixmap);

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
    delete helpme;
    delete showimage;

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

    QPixmap baseboard = computer.getBaseboard().getImage();
    QPixmap cpu = computer.getCPU().getImage();
    QPixmap gpu = computer.getGPU().getImage();
    QPixmap memorychip = computer.getMemorychip().getImage();
    QPixmap storage = computer.getStorage().getImage();

    auto t1 = computer.getBaseboard();
    t1.setImage(baseboard);

    auto t2 = computer.getCPU();
    t1.setImage(cpu);

    auto t3 = computer.getGPU();
    t1.setImage(gpu);

    auto t4 = computer.getMemorychip();
    t1.setImage(memorychip);

    auto t5 = computer.getStorage();
    t1.setImage(storage);

    computer.init(t1, t5, t4, t2, t3);

    ui->label_IMAGE_baseboard               ->setPixmap(QPixmap(baseboard).scaled(QSize(61, 41)));
    ui->label_IMAGE_cpu                     ->setPixmap(QPixmap(cpu).scaled(QSize(61, 41)));
    ui->label_IMAGE_gpu                     ->setPixmap(QPixmap(gpu).scaled(QSize(61, 41)));
    ui->label_IMAGE_memorychip              ->setPixmap(QPixmap(memorychip).scaled(QSize(61, 41)));
    ui->label_image_storage                 ->setPixmap(QPixmap(storage).scaled(QSize(61, 41)));
}

void ShadowWindow::setImageDetails() {
    QPixmap baseboard = user.getComputer().getBaseboard().getImage();
    QPixmap cpu = user.getComputer().getCPU().getImage();
    QPixmap gpu = user.getComputer().getGPU().getImage();
    QPixmap memorychip = user.getComputer().getMemorychip().getImage();
    QPixmap storage = user.getComputer().getStorage().getImage();

    auto t1 = user.getComputer().getBaseboard();
    t1.setImage(baseboard);

    auto t2 = user.getComputer().getCPU();
    t1.setImage(cpu);

    auto t3 = user.getComputer().getGPU();
    t1.setImage(gpu);

    auto t4 = user.getComputer().getMemorychip();
    t1.setImage(memorychip);

    auto t5 = user.getComputer().getStorage();
    t1.setImage(storage);

    user.getComputer().init(t1, t5, t4, t2, t3);

    ui->label_IMAGE_baseboard               ->setPixmap(QPixmap(baseboard).scaled(QSize(61, 41)));
    ui->label_IMAGE_cpu                     ->setPixmap(QPixmap(cpu).scaled(QSize(61, 41)));
    ui->label_IMAGE_gpu                     ->setPixmap(QPixmap(gpu).scaled(QSize(61, 41)));
    ui->label_IMAGE_memorychip              ->setPixmap(QPixmap(memorychip).scaled(QSize(61, 41)));
    ui->label_image_storage                 ->setPixmap(QPixmap(storage).scaled(QSize(61, 41)));
}

void ShadowWindow::updateReviewImage(int mark) {
    if(mark >= 0 && mark <= 3)  {
        ui->label_IMAGE_review->setPixmap(this->image_review_bad);
    } else if(mark >= 4 && mark <= 8) {
        ui->label_IMAGE_review->setPixmap(this->image_review_normal);
    } else {
        ui->label_IMAGE_review->setPixmap(this->image_review_great);
    }
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
    this->updateReviewImage(mark);
}

void ShadowWindow::on_pushButton_CPU_clicked() {
    Detail* dt = new CPU(user.getComputer().getCPU());
    DetailInfo* dtinfo = new CPU(user.getComputer().getCPU());
    if(ui->label_IMAGE_cpu->pixmap().isNull() == false) {
        showimage->open();

        emit SendImage(ui->label_IMAGE_cpu->pixmap());
    }
    emit SendDatainfo(dt, dtinfo);
    detailset->show();
}

void ShadowWindow::on_pushButton_GPU_clicked() {
    Detail* dt = new GPU(user.getComputer().getGPU());
    DetailInfo* dtinfo = new GPU(user.getComputer().getGPU());

    if(ui->label_IMAGE_gpu->pixmap().isNull() == false) {
        showimage->open();

        emit SendImage(ui->label_IMAGE_gpu->pixmap());
    }

    emit SendDatainfo(dt, dtinfo);
    detailset->show();

}

void ShadowWindow::on_pushButton_STORAGE_clicked() {
    Detail* dt = new Storage(user.getComputer().getStorage());
    DetailInfo* dtinfo = new Storage(user.getComputer().getStorage());

    if(ui->label_image_storage->pixmap().isNull() == false) {
        showimage->open();

        emit SendImage(ui->label_image_storage->pixmap());
    }

    emit SendDatainfo(dt, dtinfo);
    detailset->show();

}

void ShadowWindow::on_pushButton_MEMORYCHIP_clicked() {
    Detail* dt = new Memorychip(user.getComputer().getMemorychip());
    DetailInfo* dtinfo = new Memorychip(user.getComputer().getMemorychip());

    if(ui->label_IMAGE_memorychip->pixmap().isNull() == false) {
        showimage->open();

        emit SendImage(ui->label_IMAGE_memorychip->pixmap());
    }

    emit SendDatainfo(dt, dtinfo);
    detailset->show();
}

void ShadowWindow::on_pushButton_BASEBOARD_clicked() {
    Detail* dt = new Baseboard(user.getComputer().getBaseboard());
    DetailInfo* dtinfo = new Baseboard(user.getComputer().getBaseboard());

    if(ui->label_IMAGE_baseboard->pixmap().isNull() == false) {
        showimage->open();

        emit SendImage(ui->label_IMAGE_baseboard->pixmap());
    }

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
    helpme->open();
}

void ShadowWindow::on_pushButton_Manual_clicked() {
    helpme->open();
}

