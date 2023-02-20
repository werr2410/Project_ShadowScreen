#include <QCoreApplication>
#include <iostream>
#include "memorychip.h"
#include "baseboard.h"
#include "cpu.h"

//using namespace ShadowScreen::Compture;
using namespace ShadowScreen::Compture;
using namespace ShadowScreen::Compture::Function;
using namespace std;


int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    QVector<QString> res = getDataVector("memorychip", "manufacturer");

    for(int i = 0; i < res.length(); i++) {
        cout << i << ": " << res[i].toStdString() << endl;
    }

//    Baseboard bs;
//    Memorychip mc;
//    CPU cpu;

//    mc.setManufacturer();

//    QString s = mc.getManufacturer();
//    bs.init();
//    cpu.init();

//    cout << "baseboard: " <<  bs.toString().toStdString() << endl;
//    cout << "CPU: " << cpu.toString().toStdString() << endl;
//    cout << "memorychip: " << s.toStdString() << endl;

    return a.exec();
}
