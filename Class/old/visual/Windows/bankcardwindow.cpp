#include "bankcardwindow.h"
#include "ui_bankcardwindow.h"

BankcardWindow::BankcardWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BankcardWindow)
{
    ui->setupUi(this);
    bankcard = Data::Bankcard();
}

BankcardWindow::~BankcardWindow()
{
    delete ui;
}

void BankcardWindow::on_pushButton_add_clicked() {
   int year, month;
   QString title, numbercard;

   year = ui->spinBox_Year->value();
   month = ui->spinBox_Month->value();

   title = ui->textEdit_Title->placeholderText();
   numbercard = ui->textEdit_2->placeholderText();

   bankcard = Data::Bankcard(title, numbercard, QDate(year, month, 0));
}


void BankcardWindow::on_pushButton_cancel_clicked() {

}

