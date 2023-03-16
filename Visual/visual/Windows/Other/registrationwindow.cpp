#include "registrationwindow.h"
#include "ui_registrationwindow.h"

RegistrationWindow::RegistrationWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegistrationWindow)
{
    ui->setupUi(this);

    username = false;
    password = false;

    // login
    ui->textEdit_login_password->setPlaceholderText("Insert password here");
    ui->textEdit_login_username->setPlaceholderText("insert username here");

    // reg
    ui->textEdit_reg_username->setPlaceholderText("Insert username here");
    ui->textEdit_reg_password->setPlaceholderText("Insert password here");
}

RegistrationWindow::~RegistrationWindow() {
    delete ui;
}

void RegistrationWindow::on_pushButton_do_Registration_clicked() {
    QString f_username, f_password;

    if (username == false) {
        f_username = ui->textEdit_reg_username->toPlainText();

        if (f_username == "") {
            QMessageBox box;
            box.setText("bad username");
            box.exec();
            return;
        }
    }
    else {
        f_username = ShadowScreen::user::User::generationUsername();
    }

    if (password == false) {
        f_password = ui->textEdit_reg_password->toPlainText();

        if (f_password == "") {
            QMessageBox box;
            box.setText("bad password");
            box.exec();
            return;
        }
    }
    else {
        f_password = ShadowScreen::user::User::generationPassword();
    }

    QString dirPath = QFileDialog::getExistingDirectory(this, tr("Select directory"), QDir::homePath());

    if (!dirPath.isEmpty()) {
        QString filePath = dirPath + "/credentials.txt";

        QFile file(filePath);

        if (file.open(QIODevice::WriteOnly)) {
            QTextStream out(&file);
            out << "Username: " << f_username << "\n";
            out << "Password: " << f_password << "\n";
            file.close();

            QMessageBox::information(this, tr("Success"), tr("Credentials saved successfully."));
        }
        else {
            QMessageBox::warning(this, tr("Error"), tr("Failed to create file."));
        }
    }
    else {
        QMessageBox::warning(this, tr("Error"), tr("No directory selected."));
    }

    emit registrationSuccess(f_username, f_password);

    close();
}


void RegistrationWindow::on_pushButton_do_Login_clicked() {
    QMessageBox msgBox;
    msgBox.setText("sorry, but in future :(");
    msgBox.exec();
}

void RegistrationWindow::on_radioButton_withoutpassword_clicked() {
    password = !password;

    ui->textEdit_reg_password->setPlaceholderText(password ? "Read only" : "Insert password here");
    ui->textEdit_reg_password->setText("");
    ui->textEdit_reg_password->setReadOnly(password);
}


void RegistrationWindow::on_radioButton_Withoutusername_clicked() {
    username = !username;

    ui->textEdit_reg_username->setPlaceholderText(username ? "Read only" : "Insert username here");
    ui->textEdit_reg_username->setText("");
    ui->textEdit_reg_username->setReadOnly(username);
}

