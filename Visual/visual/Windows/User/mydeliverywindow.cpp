#include "mydeliverywindow.h"
#include "ui_mydeliverywindow.h"

MyDeliveryWindow::MyDeliveryWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyDeliveryWindow)
{
    ui->setupUi(this);
}

MyDeliveryWindow::~MyDeliveryWindow()
{
    delete ui;
}
