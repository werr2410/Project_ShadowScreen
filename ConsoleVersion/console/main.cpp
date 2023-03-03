#include <QCoreApplication>

#include "Computer/computer.h"

#include <iostream>

using namespace std;
using namespace ShadowScreen::Computer;

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);


    Computer comp(true);

    comp.amountMemorychip();

//    Baseboard bs(true);
//    Memorychip mc(true);
//    Storage storage(true);
//    CPU cpu(true);
//    GPU gpu(true);

//    cout << bs.toString().toStdString() << endl;
//    cout << mc.toString().toStdString() << endl;
//    cout << storage.toString().toStdString() <<  endl;
//    cout << cpu.toString().toStdString() << endl;
//    cout << gpu.toString().toStdString() << endl;

    return a.exec();
}
