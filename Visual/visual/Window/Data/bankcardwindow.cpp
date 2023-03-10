#include "bankcardwindow.h"
#include "ui_bankcard.h"

Bankcard::Bankcard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Bankcard)
{
    ui->setupUi(this);
}

Bankcard::~Bankcard()
{
    delete ui;
}
