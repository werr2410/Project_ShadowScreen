#include <QCoreApplication>
#include <iostream>
#include "detail.h"

using namespace ShadowScreen::Compture;
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Detail dt;

    dt.setManufacturer("manufacturer");

    cout << "manufacturer: " <<  dt.getManufacturer().toStdString() << endl;

    return a.exec();
}
