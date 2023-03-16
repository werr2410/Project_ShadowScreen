#include "telegramwindow.h"
#include "ui_telegramwindow.h"

TelegramWindow::TelegramWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelegramWindow) {
    ui->setupUi(this);

    telegram = Data::Telegram();
}

TelegramWindow::~TelegramWindow() {
    delete ui;
}

void TelegramWindow::initField() {
    ui->label_Chat_set      ->setText("");
    ui->label_usercode_set  ->setText("");
    ui->label_username_set  ->setText("");
}

void TelegramWindow::getTelegram(Data::Telegram telegram) {
    ui->label_Chat_set      ->setText(telegram.getChatId());
    ui->label_usercode_set  ->setText(telegram.getUsercode());
    ui->label_username_set  ->setText(telegram.getUsername());
}


void TelegramWindow::on_pushButton_close_clicked() {
    close();
}

