#ifndef MYDELIVERYWINDOW_H
#define MYDELIVERYWINDOW_H

#include <QDialog>

namespace Ui {
class MyDeliveryWindow;
}

class MyDeliveryWindow : public QDialog
{
    Q_OBJECT

public:
    explicit MyDeliveryWindow(QWidget *parent = nullptr);
    ~MyDeliveryWindow();

private:
    Ui::MyDeliveryWindow *ui;
};

#endif // MYDELIVERYWINDOW_H
