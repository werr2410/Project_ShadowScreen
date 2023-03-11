#ifndef BANKCARDWINDOW_H
#define BANKCARDWINDOW_H

#include <QDialog>
#include "Data/bankcard.h"

using namespace ShadowScreen;

namespace Ui {
class BankcardWindow;
}

class BankcardWindow : public QDialog
{
    Q_OBJECT

public:
    explicit BankcardWindow(QWidget *parent = nullptr);
    ~BankcardWindow();

private slots:
    void on_pushButton_add_clicked();

    void on_pushButton_cancel_clicked();

private:
    Ui::BankcardWindow *ui;

    Data::Bankcard bankcard;
};

#endif // BANKCARDWINDOW_H
