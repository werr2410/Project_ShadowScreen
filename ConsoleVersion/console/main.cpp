#include <QCoreApplication>

#include "Computer/computer.h"
#include "Database/mssql.h"
#include "Data/delivery.h"
#include "Data/bankcard.h"
#include "User/user.h"
#include <iostream>
#include <QDebug>

using namespace std;
using namespace ShadowScreen::computer;
using namespace ShadowScreen::Database;
using namespace ShadowScreen::Exception;
using namespace ShadowScreen::user;
using namespace ShadowScreen::Data;

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    MSSQL db("DESKTOP-TDHSHRS\\NEWSQL2", "ShadowScreen", "QTCPLUSPLUS", "p12plusplusexam");

    db.init();
    qDebug() << db.open();

    if(db.getStatus()) {
        User andrey("username", "password");
        andrey.setComputer(Computer(true));

        andrey.init(db.getDatabase());
    }

    return a.exec();
}
