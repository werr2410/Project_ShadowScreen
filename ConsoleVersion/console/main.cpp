#include <QCoreApplication>
#include <iostream>
#include "reviews.h"

using namespace ShadowScreen::Data;
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Reviews rv;

    // set
    rv.setTitle("Title");
    rv.setDescription("Desc");
    rv.setMark(true);

    // get
    cout << "Title: " << rv.getTitle().toStdString() << endl;
    cout << "Description: " << rv.getDescription().toStdString() << endl;
    cout << "Mark: " << rv.getMark() << endl;

    // prof get
    cout << "Prof get  reviews: " << rv.getReviews().toStdString() << endl;

    return a.exec();
}
