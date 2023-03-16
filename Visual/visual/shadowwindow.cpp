#include "shadowwindow.h"
#include "ui_shadowwindow.h"

ShadowWindow::ShadowWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ShadowWindow)
{
    ui->setupUi(this);

    regist = new RegistrationWindow(this);
    detailset = new DetailSetWindow(this);

    connect(regist, &RegistrationWindow::registrationSuccess, this, &ShadowWindow::onRegistrationSuccess);
    connect(this, &ShadowWindow::SendDatainfo, detailset, &DetailSetWindow::receiveData);

    regist->show();
}

ShadowWindow::~ShadowWindow() {
    delete ui;

    delete regist;
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

    ui->label_IMAGE_baseboard               ->setPixmap(computer.getBaseboard().getImage());
    ui->label_IMAGE_cpu                     ->setPixmap(computer.getCPU().getImage());
    ui->label_IMAGE_gpu                     ->setPixmap(computer.getGPU().getImage());
    ui->label_IMAGE_memorychip              ->setPixmap(computer.getMemorychip().getImage());
    ui->label_image_storage                 ->setPixmap(computer.getStorage().getImage());
}

void ShadowWindow::onRegistrationSuccess(QString username, QString password)
{
    user.setUsername(username);
    user.setPassword(password);

    initComputer(user.getComputer());

    qDebug() << user.getComputer().toString();

    qDebug() << user.getUsername();
    qDebug() << user.getPassword();
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

