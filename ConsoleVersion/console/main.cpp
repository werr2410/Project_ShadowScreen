#include <QCoreApplication>
#include <iostream>
#include "delivery.h"

using namespace ShadowScreen::Data;
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Delivery dl;

    // set
    dl.setTitle("Title");
    dl.setTypeDelivery(ShadowScreen::Data::Novaposhta);
    dl.setAdress(Adress("street", "number"));

    // get
    cout << "Title: "  << dl.getTitle().toStdString() << endl;
    cout << "Type: ";

    switch(dl.getTypeDelivery()) {
    case ShadowScreen::Data::Novaposhta: cout << "Novaposhta" << endl; break;
    case ShadowScreen::Data::Ukrposhta: cout << "Urkposhta " << endl; break;
    case ShadowScreen::Data::Meest: cout << "Meest " << endl; break;
    }

    cout << "Adress: " << dl.getAdress().getFullAdress().toStdString() << endl;

    // prof get

    cout << "prof get: " << dl.getDelivery().toStdString() << endl;

    return a.exec();
}
