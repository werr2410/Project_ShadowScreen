#ifndef MYBANKCARDWINDOW_H
#define MYBANKCARDWINDOW_H

#include <QDialog>
#include <QVector>

#include "Windows/bankcardwindow.h"

namespace Ui {
class MyBankcardWindow;
}

class MyBankcardWindow : public QDialog
{
    Q_OBJECT

public:
    explicit MyBankcardWindow(QWidget *parent = nullptr);
    ~MyBankcardWindow();

public slots:
    // bankcard
    void getBankcard(ShadowScreen::Data::Bankcard bankcard);

    // ShadowScreen
    void getVector(QVector<ShadowScreen::Data::Bankcard> bankcard);

    // button
    void on_pushButton_delete_clicked();
    void on_pushButton_Order_clicked();
    void on_pushButton_close_clicked();
    void on_pushButton_add_clicked();

signals:
    void sendToMainBankcard(QVector<ShadowScreen::Data::Bankcard> bankcard);

private:
    Ui::MyBankcardWindow *ui;

    QVector<ShadowScreen::Data::Bankcard> bankcard;
    BankcardWindow* bankcardwindow;

    void initField();
    void updateTable();
};

#endif // MYBANKCARDWINDOW_H
