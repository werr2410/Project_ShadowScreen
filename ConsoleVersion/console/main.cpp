#include <QCoreApplication>

#include "Computer/computer.h"
#include "Database/mssql.h"
#include "Data/delivery.h"
#include "Data/bankcard.h"
#include <iostream>
#include <QDebug>

using namespace std;
using namespace ShadowScreen::computer;
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
        // adress.selectDataById(db.getDatabase(), 10);

        qDebug() << adress.toString();

        if(adress.selectDataById(db.getDatabase(), 43509)) qDebug() << "OKK\n";
        else qDebug() << "NONNNNNNNNN\n";

        qDebug() << adress.toString();
        db.close();
    }


    return a.exec();
}
