#ifndef DELIVERYWINDOW_H
#define DELIVERYWINDOW_H

#include <QDialog>

namespace Ui {
class DeliveryWindow;
}

class DeliveryWindow : public QDialog
{
    Q_OBJECT

public:
    explicit DeliveryWindow(QWidget *parent = nullptr);
    ~DeliveryWindow();

private:
    Ui::DeliveryWindow *ui;
};

#endif // DELIVERYWINDOW_H
