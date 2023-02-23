#include <QCoreApplication>
#include <iostream>
#include <cstring>
#include <string>

#include "password.h"

using namespace std;
//using namespace ShadowScreen::Compture;
using namespace ShadowScreen::UserData;

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    Password pass("A234dsg@#(84234ndrey12432423",  "Gorbunov");


    cout << "without: " << pass.getPassword().toStdString() << endl;
    cout << "password after: " << pass.getPassword("Gorbunov").toStdString() << endl;
    cout << "line: " << "A234dsg@#(84234ndrey12432423" << endl;

    return a.exec();
}
