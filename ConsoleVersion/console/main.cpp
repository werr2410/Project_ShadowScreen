#include <QCoreApplication>
#include <iostream>
#include "baseboard.h"

//using namespace ShadowScreen::Compture;
using namespace ShadowScreen::Compture;
using namespace std;


int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    Baseboard bs;

    bs.setAll();

    cout << bs.toString().toStdString() << endl;

    return a.exec();
}
