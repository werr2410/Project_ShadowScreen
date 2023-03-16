#include "adresswindow.h"
#include "ui_adresswindow.h"

AdressWindow::AdressWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdressWindow)
{
    ui->setupUi(this);
    adress = Data::Adress();
}

AdressWindow::~AdressWindow() {
    delete ui;
}

void AdressWindow::getAdress(Data::Adress adress) {
    this->adress = adress;

    ui->textEdit_Country->setText(adress.getCountry());
    ui->textEdit_Town->setText(adress.getTown());
    ui->textEdit_Street->setText(adress.getStreet());
    ui->textEdit_Number->setText(adress.getNumberHouse());
}

void AdressWindow::on_pushButton_add_clicked() {
    QString country;
    QString town;
    QString street;
    QString number;

    country = ui->textEdit_Country->toPlainText();
    town = ui->textEdit_Town->toPlainText();
    street = ui->textEdit_Street->toPlainText();
    number = ui->textEdit_Number->toPlainText();

    if(country.isEmpty() || town.isEmpty() || street.isEmpty() || number.isEmpty()) {
        QMessageBox box;

        box.setText("some field is empty: please try again");
        box.exec();

        return;
    }

    emit SenderAdress(ShadowScreen::Data::Adress(country, town, street, number));

    close();
}


void AdressWindow::on_pushButton_Cancale_clicked() {
    emit SenderAdress(ShadowScreen::Data::Adress());

    close();
}

