#include <QCoreApplication>
#include <iostream>
#include <cstring>
#include <string>

#include "baseboard.h"
#include "cpu.h"
#include "memorychip.h"
#include "videocard.h"
#include "storage.h"

using namespace std;
using namespace ShadowScreen::Compture;

int main(int argc, char *argv[]) {

    QCoreApplication a(argc, argv);

    Baseboard bs;
    CPU cpu;
    Memorychip mc;
    Videocard vc;
    Storage st;

    bs.init();
    cpu.init();
    mc.init();
    vc.init();
    st.init();

    cout << bs.toString().toStdString() << endl;
    cout << cpu.toString().toStdString() << endl;
    cout << mc.toString().toStdString() << endl;
    cout << vc.toString().toStdString() << endl;
    cout << st.toString().toStdString() << endl;

    return a.exec();
}
