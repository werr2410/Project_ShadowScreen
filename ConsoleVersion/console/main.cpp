#include <QCoreApplication>

#include "Computer/baseboard.h"
#include "Computer/cpu.h"

#include <iostream>

using namespace std;
using namespace ShadowScreen::Computer;

int main(int argc, char *argv[]) {

    QCoreApplication a(argc, argv);

    Baseboard bs(true);
    CPU cpu(true);

    cout << bs.toString().toStdString() << endl;
    cout << cpu.getManufacturer().toStdString() << " ------ " << cpu.getName().toStdString() << endl;

    return a.exec();
}
