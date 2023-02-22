#include <QCoreApplication>
#include <iostream>
#include <cstring>
#include <string>

#include "memorychip.h"
#include "baseboard.h"
#include "storage.h"
#include "cpu.h"
#include "videocard.h"

using namespace std;
using namespace ShadowScreen::Compture;


int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    Memorychip chip;
    Videocard video;
    Baseboard board;
    Storage storage;
    CPU cpu;

    board.init();
    chip.init();
    cpu.init();
    storage.init();
    video.init();

    cout << "Baseboard: " << board.toString().toStdString() << endl;
    cout << "CPU: " << cpu.toString().toStdString() << endl;
    cout << "Memorychip: " << chip.toString().toStdString() << endl;
    cout << "Storage:  " << storage.toString().toStdString() << endl;
    cout << "GPU: " << video.toString().toStdString() << endl;

    return a.exec();
}
