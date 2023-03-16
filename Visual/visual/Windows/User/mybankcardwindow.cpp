#include "mybankcardwindow.h"
#include "ui_mybankcardwindow.h"

MyBankcardWindow::MyBankcardWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyBankcardWindow)
{
    ui->setupUi(this);

    bankcardwindow = new BankcardWindow(this);

    // bankcard
    connect(bankcardwindow, &BankcardWindow::SendBankcard, this, &MyBankcardWindow::getBankcard);   // bankcard -> myBankcard
}

MyBankcardWindow::~MyBankcardWindow() {
    delete bankcardwindow;

    delete ui;
}

void MyBankcardWindow::on_pushButton_close_clicked() {
    emit sendToMainBankcard(bankcard);

    close();
}

void MyBankcardWindow::on_pushButton_add_clicked() {
    bankcardwindow->show();
}

void MyBankcardWindow::getBankcard(Data::Bankcard bankcard) {
    this->bankcard.push_back(bankcard);

    bankcardwindow->close();

    updateTable();
}

void MyBankcardWindow::getVector(QVector<Data::Bankcard> bankcard) {
    initField();

    this->bankcard = bankcard;
}

void MyBankcardWindow::initField() {
    this->bankcard.clear();
}

void MyBankcardWindow::updateTable() {
    int rowCount = ui->tableWidget->rowCount();

    if (rowCount != bankcard.length()) {
        ui->tableWidget->setRowCount(bankcard.length());
    }

    ui->tableWidget->clearContents();

    for (int i = 0; i < bankcard.length(); i++) {
        auto* item = ui->tableWidget->item(i, 0);

        if (!item) {
            item = new QTableWidgetItem();
            ui->tableWidget->setItem(i, 0, item);
        }

        item->setText(bankcard[i].getTitle());

        item = ui->tableWidget->item(i, 1);

        if (!item) {
            item = new QTableWidgetItem();
            ui->tableWidget->setItem(i, 1, item);
        }

        item->setText(bankcard[i].getNumber());

        item = ui->tableWidget->item(i, 2);

        if (!item) {
            item = new QTableWidgetItem();
            ui->tableWidget->setItem(i, 2, item);
        }

        item->setText(bankcard[i].getExpirationDate().toString("MM/yyyy"));
    }
}


void MyBankcardWindow::on_pushButton_delete_clicked() {
    QString title = ui->textEdit_Title->toPlainText();
    QString number = ui->textEdit_Number->toPlainText();

    if (!title.isEmpty() && number.length() == 16) {
        auto it = std::find_if(bankcard.begin(), bankcard.end(), [&](const ShadowScreen::Data::Bankcard& bc) {
            return bc.getTitle() == title && bc.getNumber() == number;
        });

        if (it != bankcard.end()) {
            bankcard.erase(it);
            updateTable();
        }
    }
}


void MyBankcardWindow::on_pushButton_Order_clicked() {
    QString type = ui->comboBox->currentText();

    auto compareFunc = [&](const ShadowScreen::Data::Bankcard& a, const ShadowScreen::Data::Bankcard& b) {
        if (type == "Title") {
            return a.getTitle() < b.getTitle();
        } else if (type == "Number") {
            return a.getNumber() < b.getNumber();
        } else if (type == "Date") {
            return a.getExpirationDate() < b.getExpirationDate();
        } else {
            return false;
        }
    };

    std::sort(bankcard.begin(), bankcard.end(), compareFunc);
    updateTable();
}

