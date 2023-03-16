#ifndef REGISTRATIONWINDOW_H
#define REGISTRATIONWINDOW_H

#include <QDialog>
#include <QMessageBox>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>

#include "User/user.h"

using namespace ShadowScreen::user;

namespace Ui {
class RegistrationWindow;
}

class RegistrationWindow : public QDialog
{
    Q_OBJECT

public:
    explicit RegistrationWindow(QWidget *parent = nullptr);
    ~RegistrationWindow();

private slots:
    void on_pushButton_do_Registration_clicked();

    void on_pushButton_do_Login_clicked();

    void on_radioButton_withoutpassword_clicked();

    void on_radioButton_Withoutusername_clicked();

signals:
    void registrationSuccess(QString username, QString password);

private:
    Ui::RegistrationWindow *ui;

    bool username;
    bool password;
};

#endif // REGISTRATIONWINDOW_H
