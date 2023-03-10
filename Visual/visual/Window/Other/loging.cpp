#include "loging.h"
#include "ui_loging.h"

Loging::Loging(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Loging)
{
    ui->setupUi(this);
}

Loging::~Loging()
{
    delete ui;
}
