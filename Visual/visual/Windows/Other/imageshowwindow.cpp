#include "imageshowwindow.h"
#include "ui_imageshowwindow.h"

void ImageShowWindow::getPixmap(QPixmap map) {
    this->map = map.scaled(512, 512);

    ui->label->setPixmap(map);
}

ImageShowWindow::ImageShowWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ImageShowWindow)
{
    ui->setupUi(this);

    map = QPixmap();
}

ImageShowWindow::~ImageShowWindow()
{
    delete ui;
}
