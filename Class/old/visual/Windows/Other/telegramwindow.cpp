#include "telegramwindow.h"
#include "ui_telegramwindow.h"

TelegramWindow::TelegramWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelegramWindow) {
    ui->setupUi(this);
}

TelegramWindow::TelegramWindow(Data::Telegram telegram) : TelegramWindow() {
    initFields(telegram);
}

TelegramWindow::~TelegramWindow() {
    delete ui;
}

void TelegramWindow::initFields(Data::Telegram telegram) {
    ui->label_username_set->setText(telegram.getUsername());
    ui->label_usercode_set->setText(telegram.getUsercode());
    ui->label_6->setText(telegram.getChatId());
}
