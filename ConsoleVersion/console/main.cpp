#include <QCoreApplication>
#include <iostream>
#include <cstring>
#include <string>

#include "memorychip.h"
#include "baseboard.h"
#include "cpu.h"

using namespace std;
using namespace ShadowScreen::Compture;


int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    Memorychip chip;
    Baseboard board;
    CPU cpu;

    board.init();
    chip.init();
    cpu.init();

    cout << "Baseboard: " << board.toString().toStdString() << endl;
    cout << "CPU: " << cpu.toString().toStdString() << endl;
    cout << "Memorychip: " << chip.toString().toStdString() << endl;

    return a.exec();
}
