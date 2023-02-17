#include <QCoreApplication>
#include <iostream>
#include "bankcard.h"

using namespace ShadowScreen::Data;
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    BankCard bc;

    // set
    bc.setTitle("Bank Card");
    bc.setNumber("1234123412341234");
    bc.setExpirationDate(QDate().currentDate().addYears(1));

    // get
    cout << "Title: " << bc.getTitle().toStdString() << endl;
    cout << "Number: " << bc.getNumber().toStdString() << endl;
    cout << "Date: " << bc.getExpirationDate().toString("dd.MM.yyyy").toStdString() << endl;

    // prof get
    QString str, str1;
    QDate date;

    bc.getFullBankCard(str, str1, date);
    cout << "prof get Title: " << str.toStdString() << endl;
    cout << "prof get Number: " << str1.toStdString() << endl;
    cout << "prof get Date: " << date.toString("dd.MM.yyyy").toStdString() << endl;

    // super prof get

    cout << "super prof get: " << bc.getFullBankCard().toStdString() << endl;

    return a.exec();
}
