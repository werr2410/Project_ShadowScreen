#include <QCoreApplication>

#include "Computer/computer.h"
#include "Data/security.h"
#include "Database/mssql.h"

#include <iostream>
#include <QDebug>

using namespace std;
using namespace ShadowScreen::Computer;
using namespace ShadowScreen::Securitys;
using namespace ShadowScreen::Database;
using namespace ShadowScreen::Exception;

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    Baseboard bs(true);

    qDebug() << bs.toString();

//    MSSQL db("DESKTOP-TDHSHRS\\NEWSQL2", "ShadowScreen", "QTCPLUSPLUS", "p12plusplusexam");

//    db.init();
//    qDebug() << db.open();

//    if(db.getStatus())
//        db.close();

    return a.exec();
}
