#include <QCoreApplication>
#include <iostream>
#include "baseboard.h"
#include "cpu.h"

//using namespace ShadowScreen::Compture;
using namespace ShadowScreen::Compture;
using namespace std;


int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    Baseboard bs;
    CPU cpu;

    bs.init();
    cpu.init();

    cout << "baseboard: " <<  bs.toString().toStdString() << endl;
    cout  << "CPU: " << cpu.toString().toStdString() << endl;

    return a.exec();
}
