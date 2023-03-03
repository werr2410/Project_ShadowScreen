#include <QCoreApplication>

#include "Computer/baseboard.h"
#include "Computer/cpu.h"
#include "Computer/videocard.h"
#include "Computer/storage.h"
#include "Computer/memorychip.h"

#include <iostream>

using namespace std;
using namespace ShadowScreen::Computer;

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    Baseboard bs(true);
    Memorychip mc(true);
    Storage storage(true);
    CPU cpu(true);
    Videocard gpu(true);

    cout << bs.toString().toStdString() << endl;
    cout << mc.toString().toStdString() << endl;
    cout << storage.toString().toStdString() <<  endl;
    cout << cpu.toString().toStdString() << endl;
    cout << gpu.toString().toStdString() << endl;

    return a.exec();
}
