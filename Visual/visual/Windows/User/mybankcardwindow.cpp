#include "mybankcardwindow.h"
#include "ui_mybankcardwindow.h"

MyBankcardWindow::MyBankcardWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyBankcardWindow)
{
    ui->setupUi(this);
}

MyBankcardWindow::~MyBankcardWindow()
{
    delete ui;
}
