#include "adresswindow.h"
#include "ui_adresswindow.h"

AdressWindow::AdressWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdressWindow)
{
    ui->setupUi(this);
    adress = Data::Adress();
}

AdressWindow::~AdressWindow()
{
    delete ui;
}

void AdressWindow::on_pushButton_clicked() {
    QString country, town, street, number;

    country = ui->textEdit_Country->placeholderText();
    town = ui->textEdit_Town->placeholderText();
    street = ui->textEdit_Street->placeholderText();
    number = ui->textEdit_Number->placeholderText();

    adress = Data::Adress((country.isEmpty() ? "unknown" : country), town, street, number);

}

void AdressWindow::on_pushButton_2_clicked() {
    // pass
}

