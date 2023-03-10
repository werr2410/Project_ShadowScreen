#include "adresswindow.h"
#include "ui_adresswindow.h"

AdressWindow::AdressWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdressWindow)
{
    ui->setupUi(this);
}

AdressWindow::~AdressWindow()
{
    delete ui;
}
