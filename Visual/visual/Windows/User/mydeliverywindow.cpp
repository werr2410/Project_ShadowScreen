#include "mydeliverywindow.h"
#include "ui_mydeliverywindow.h"

MyDeliveryWindow::MyDeliveryWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyDeliveryWindow)
{
    ui->setupUi(this);

    deliverywindow = new DeliveryWindow(this);

    connect(this, &MyDeliveryWindow::setDelivery, deliverywindow, &DeliveryWindow::getDelivery);
    connect(deliverywindow, &DeliveryWindow::SendDelivery, this, &MyDeliveryWindow::getDelivery);
}

MyDeliveryWindow::~MyDeliveryWindow() {
    delete deliverywindow;

    delete ui;
}

void MyDeliveryWindow::getDeliveryList(QVector<Data::Delivery> delivery) {
    delivery.clear();

    for(int i = 0; i < delivery.length(); i++)
        this->delivery.push_back(delivery[i]);

    updateTable();
}

void MyDeliveryWindow::getDelivery(Data::Delivery delivery) {
    this->deliverywindow->close();

    this->delivery.push_back(delivery);

    updateTable();
}


void MyDeliveryWindow::on_pushButton_Add_clicked() {
    deliverywindow->show();

    updateTable();
}


void MyDeliveryWindow::on_pushButton_close_clicked() {
    emit setDeliveryList(delivery);

    close();
}


void MyDeliveryWindow::on_pushButton_Delete_clicked() {
    QString title = ui->textEdit_Titl_delete->toPlainText();
    int type = ui->comboBox_Type->currentIndex();

    if (!title.isEmpty()) {
        auto it = std::find_if(delivery.begin(), delivery.end(), [&](const ShadowScreen::Data::Delivery& dl) {
            return dl.getTitle() == title && dl.getTypeDelivery() == type;
        });

        if (it != delivery.end()) {
            delivery.erase(it);
            updateTable();
        }
    }
}

QString deliveryTypeToString(ShadowScreen::Data::TypeDelivery deliveryType) {
    switch(deliveryType) {
    case ShadowScreen::Data::Ukrposhta:
        return "Ukrposhta";
    case ShadowScreen::Data::NovaPoshta:
        return "Novaposhta";
    case ShadowScreen::Data::Meest:
        return "Meest";
    }

    return "";
}

void MyDeliveryWindow::updateTable() {
    ui->tableWidget->setRowCount(delivery.length());

    for(int i = 0; i < delivery.length();i++) {
        auto* itemTitle = new QTableWidgetItem();
        auto* itemTypeDelivery = new QTableWidgetItem();
        auto* itemAdress = new QTableWidgetItem();

        ShadowScreen::Data::TypeDelivery type = delivery[i].getTypeDelivery();

        itemTitle->setText(delivery[i].getTitle());
        itemTypeDelivery->setText(deliveryTypeToString(type));
        itemAdress->setText(delivery[i].getAdress().getCountry() + " " + delivery[i].getAdress().getTown() + " " + delivery[i].getAdress().getStreet() + " " + delivery[i].getAdress().getNumberHouse());

        ui->tableWidget->setItem(i, 0, itemTitle);
        ui->tableWidget->setItem(i, 1, itemTypeDelivery);
        ui->tableWidget->setItem(i, 2, itemAdress);
    }
}


void MyDeliveryWindow::on_pushButton_Add_2_clicked() {
    QString type = ui->comboBox_Order->currentText();

    auto compareFunc = [&](const ShadowScreen::Data::Delivery& a, const ShadowScreen::Data::Delivery& b) {
        if (type == "Title") {
            return a.getTitle() < b.getTitle();
        } else if (type == "Adress") {
            return a.getAdress() < b.getAdress();
        } else {
            return false;
        }
    };

    std::sort(delivery.begin(), delivery.end(), compareFunc);
    updateTable();
}

