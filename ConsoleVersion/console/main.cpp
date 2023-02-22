#include <QCoreApplication>
#include <iostream>
#include <cstring>
#include <string>
#include "baseboard.h"
#include "cpu.h"

using namespace std;
using namespace ShadowScreen::Compture;


int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    Baseboard board;
    CPU cpu;

    board.init();
    cpu.init();

    //cout << board.toString().toStdString() << endl;
    cout << cpu.toString().toStdString() << endl;

    return a.exec();
}
