#include <QCoreApplication>
#include <iostream>
#include "adress.h"

using namespace ShadowScreen::Data;
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Adress a1("townX", "StreetX");

    //  set

//    a1.setCountry("country");
//    a1.setTown("Town");
//    a1.setStreet("street");
//    a1.setNumber("number");

    // get
    cout << "Country: " << a1.getCountry().toStdString() << endl;
    cout << "Town: " << a1.getTown().toStdString() << endl;
    cout << "Street: " << a1.getStreet().toStdString() << endl;
    cout << "Number " << a1.getNumber().toStdString() << endl;

    // prof get
    QString str;
    QString str1;
    QString str11;
    QString str111;

    cout << "Full adress return: " << a1.getFullAdress().toStdString() << endl;

    a1.getFullAdress(str);
    cout << "Full adress link: " << str.toStdString() << endl;

    a1.getAdress(str, str1, str11, str111);
    cout << "prof get Country: " << str.toStdString() << endl;
    cout << "prof get Town: " << str1.toStdString() << endl;
    cout << "prof get Street: " << str11.toStdString() << endl;
    cout << "prof get Number " << str111.toStdString() << endl;

    return a.exec();
}
