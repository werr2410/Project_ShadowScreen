#include <QCoreApplication>

#include "Computer/computer.h"
#include "Data/security.h"
#include "Database/mssql.h"
#include "Data/adress.h"
#include <iostream>
#include <QDebug>

using namespace std;
using namespace ShadowScreen::computer;
using namespace ShadowScreen::Securitys;
using namespace ShadowScreen::Database;
using namespace ShadowScreen::Exception;
using namespace ShadowScreen::Data;

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    MSSQL db("DESKTOP-TDHSHRS\\NEWSQL2", "ShadowScreen", "QTCPLUSPLUS", "p12plusplusexam");

    db.init();
    qDebug() << db.open();

    if(db.getStatus()) {
        Adress adress;

        adress.selectDataById(db.getDatabase(), 16);

        qDebug() << adress.toString();
    }

    if(db.getStatus())
        db.close();

    return a.exec();
}
