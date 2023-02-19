#include <QCoreApplication>
#include <iostream>
#include "baseboard.h"

using namespace ShadowScreen::Compture;
using namespace ShadowScreen::Compture::Function;
using namespace std;


int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    Baseboard a1;


    cout << "res: " << a1.toString().toStdString() << endl;
//    cout << getData("baseboard", "manufacturer").toStdString() << endl;
//    cout << getData("baseboard", "product").toStdString() << endl;



    return a.exec();
}
