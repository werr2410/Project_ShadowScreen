#include "shadowwindow.h"
#include "ui_shadowwindow.h"

ShadowWindow::ShadowWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ShadowWindow) {

    ui->setupUi(this);

    regist.show();

    user = User();

    user.setComputer(Computer(true));

    initComputer(user.getComputer());

    ui->label_username_set->setText(user.getUsername());
}

ShadowWindow::~ShadowWindow() {
    delete ui;
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

