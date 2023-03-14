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
//        Adress adress;
//        adress.selectDataById(db.getDatabase(), 10);

//        Delivery del("me delivery", Meest, adress);
//        del.insertDataTable(db.getDatabase());

//        Delivery bank1;

//        bank1.selectDataById(db.getDatabase(), del.getDataById(db.getDatabase()));

//        qDebug() << bank1.toString();

        GPU gpu(true);

        qDebug() << gpu.toString();


        db.close();
    }


    return a.exec();
}
