#include "userdatawindow.h"
#include "ui_userdatawindow.h"

UserDataWindow::UserDataWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserDataWindow)
{
    ui->setupUi(this);

    us = ShadowScreen::user::User(false);
}

UserDataWindow::~UserDataWindow() {
    delete ui;
}

void UserDataWindow::initFields() {
    ui->textEdit_Username   ->setText(us.getUsername());
    ui->textEdit_Name       ->setText(us.getName());
    ui->textEdit_Surname    ->setText(us.getSurname());
    ui->textEdit_Middlename ->setText(us.getMiddlename());
    ui->textEdit_Email      ->setText(us.getEmail());
    ui->textEdit_Password   ->setText(us.getPassword());
    ui->dateEdit            ->setDate(us.getBirthday());
    ui->label_hashcode_set  ->setText(us.getHashcode());
}

bool UserDataWindow::checkEmptyString(QString str) const {
    if(str == "") {
        QMessageBox box;

        box.setText("any field empty: erorr");
        box.exec();

        return true;
    }

    return false;
}


void UserDataWindow::on_pushButton_Save_clicked() {

    try {
        // Username
        if(checkEmptyString(ui->textEdit_Username->toPlainText()) == false)
            us.setUsername(ui->textEdit_Username->toPlainText());
        else return;

        // Password
        if(checkEmptyString(ui->textEdit_Password->toPlainText()) == false)
            us.setPassword(ui->textEdit_Password->toPlainText());
        else return;

        // Name
        if(checkEmptyString(ui->textEdit_Name->toPlainText()) == false)
            us.setName(ui->textEdit_Name->toPlainText());
        else return;

        // Username
        if(checkEmptyString(ui->textEdit_Username->toPlainText()) == false)
            us.setUsername(ui->textEdit_Username->toPlainText());
        else return;

        // Middlename
        if(checkEmptyString(ui->textEdit_Middlename->toPlainText()) == false)
            us.setMiddlename(ui->textEdit_Middlename->toPlainText());
        else return;

        // Surname
        if(checkEmptyString(ui->textEdit_Surname->toPlainText()) == false)
            us.setSurname(ui->textEdit_Surname->toPlainText());
        else return;

        // Email
        if(checkEmptyString(ui->textEdit_Email->toPlainText()) == false)
            us.setEmail(ui->textEdit_Email->toPlainText());
        else return;
    } catch(ShadowScreen::Exception::SSExecptions* e) {
        QMessageBox box;

        box.setText("some fields is invalid: " + e->message());
        box.exec();
    }


    us.setBirthDay(ui->dateEdit->date()); // Birthday

    emit sendUserData(us);

    close();

}


void UserDataWindow::on_pushButton_Cancel_clicked() {
    close();
}

void UserDataWindow::getUserData(ShadowScreen::user::User user) {
    us = user;

    initFields();
}

