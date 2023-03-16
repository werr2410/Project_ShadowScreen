#include "deliverywindow.h"
#include "ui_deliverywindow.h"

DeliveryWindow::DeliveryWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DeliveryWindow)
{
    ui->setupUi(this);

    adress = new AdressWindow(this);

    connect(this, &DeliveryWindow::SendAdress, adress, &AdressWindow::getAdress);   // main -> adress
    connect(adress, &AdressWindow::SenderAdress, this, &DeliveryWindow::getAdress); // adress -> main
}

DeliveryWindow::~DeliveryWindow() {
    delete adress;

    delete ui;
}

void DeliveryWindow::getAdress(ShadowScreen::Data::Adress adress) {
    delivery.setAdress(adress);
}

void DeliveryWindow::getDelivery(ShadowScreen::Data::Delivery delivery) {
    this->delivery = delivery;

    ui->comboBox_TypeDelivery->setCurrentIndex(delivery.getTypeDelivery());
    ui->textEdit_Title->setText(delivery.getTitle());
}

void DeliveryWindow::on_pushButton_add_clicked() {
    emit SendDelivery(delivery);

    close();
}


void DeliveryWindow::on_pushButton_cancel_clicked() {
    close();
}


void DeliveryWindow::on_pushButton_adress_clicked() {
    emit SendAdress(delivery.getAdress());

    adress->show();
}

