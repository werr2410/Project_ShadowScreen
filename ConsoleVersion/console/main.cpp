#include <QCoreApplication>
#include <iostream>
#include <cstring>
#include <string>
#include "baseboard.h"

using namespace std;
using namespace ShadowScreen::Compture;


int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    Baseboard board;

    board.init();

    cout << board.toString().toStdString() << endl;

    return a.exec();
}
