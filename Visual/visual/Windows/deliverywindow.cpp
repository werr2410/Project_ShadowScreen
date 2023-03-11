#include "deliverywindow.h"
#include "ui_deliverywindow.h"

DeliveryWindow::DeliveryWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DeliveryWindow)
{
    ui->setupUi(this);
}

DeliveryWindow::~DeliveryWindow()
{
    delete ui;
}
