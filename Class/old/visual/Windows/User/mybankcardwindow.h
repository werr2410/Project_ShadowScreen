#ifndef MYBANKCARDWINDOW_H
#define MYBANKCARDWINDOW_H

#include <QDialog>

namespace Ui {
class MyBankcardWindow;
}

class MyBankcardWindow : public QDialog
{
    Q_OBJECT

public:
    explicit MyBankcardWindow(QWidget *parent = nullptr);
    ~MyBankcardWindow();

private:
    Ui::MyBankcardWindow *ui;
};

#endif // MYBANKCARDWINDOW_H
