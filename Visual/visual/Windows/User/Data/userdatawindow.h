#ifndef USERDATAWINDOW_H
#define USERDATAWINDOW_H

#include <QDialog>
#include <QMessageBox>

#include "User/user.h"

namespace Ui {
class UserDataWindow;
}

class UserDataWindow : public QDialog {
    Q_OBJECT

public:
    explicit UserDataWindow(QWidget *parent = nullptr);
    ~UserDataWindow();

private:
    Ui::UserDataWindow *ui;
    ShadowScreen::user::User us;

    void initFields();
    bool checkEmptyString(QString str) const;

private slots:
    void on_pushButton_Save_clicked();
    void on_pushButton_Cancel_clicked();

public slots:
    void getUserData(ShadowScreen::user::User user);

signals:
    void sendUserData(ShadowScreen::user::User user);
};

#endif // USERDATAWINDOW_H
