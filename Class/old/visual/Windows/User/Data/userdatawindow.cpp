#include "userdatawindow.h"
#include "ui_userdatawindow.h"

UserDataWindow::UserDataWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserDataWindow)
{
    ui->setupUi(this);
}

UserDataWindow::~UserDataWindow()
{
    delete ui;
}
