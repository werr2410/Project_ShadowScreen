#include "bankcardwindow.h"
#include "ui_bankcardwindow.h"

BankcardWindow::BankcardWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BankcardWindow) {
    ui->setupUi(this);

    bankcard = Data::Bankcard();

}

BankcardWindow::~BankcardWindow() {
    delete ui;
}

void BankcardWindow::on_pushButton_add_clicked() {
    QString title, number;
    int year, month;

    title = ui->textEdit_Title->toPlainText();
    number = ui->textEdit_Number->toPlainText();

    year = ui->spinBox_Year->value();
    month = ui->spinBox_Month->value();

    if(checkBankcard(number) == false)  {
        QMessageBox box;

        box.setText("numbercard isn't invalid");
        box.exec();

        return;
    }

    QDate expirationDate = QDate(year, month, 0);

    bankcard = Data::Bankcard((title.isEmpty() ? "no title" : title), number, expirationDate);

    emit SendBankcard(bankcard);

    close();
}


void BankcardWindow::on_pushButton_cancel_clicked() {
    close();
}

void BankcardWindow::initField() {
    ui->textEdit_Number->setText("");
    ui->textEdit_Title->setText("");
    ui->spinBox_Month->setValue(1);
    ui->spinBox_Year->setValue(2020);

    bankcard = Data::Bankcard();
}

bool BankcardWindow::checkBankcard(QString cardNumber) const {
    for (QChar c : cardNumber) {
        if (!QChar(c).isDigit()) {
            return false;
        }
    }

    return (cardNumber.length() == 16);
}

