#ifndef USERDATAWINDOW_H
#define USERDATAWINDOW_H

#include <QDialog>

namespace Ui {
class UserDataWindow;
}

class UserDataWindow : public QDialog
{
    Q_OBJECT

public:
    explicit UserDataWindow(QWidget *parent = nullptr);
    ~UserDataWindow();

private:
    Ui::UserDataWindow *ui;
};

#endif // USERDATAWINDOW_H
