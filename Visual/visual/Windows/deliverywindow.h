#ifndef DELIVERYWINDOW_H
#define DELIVERYWINDOW_H

#include <QDialog>

#include "Windows/adresswindow.h"

#include "Data/delivery.h"

namespace Ui {
class DeliveryWindow;
}

class DeliveryWindow : public QDialog
{
    Q_OBJECT

public:
    explicit DeliveryWindow(QWidget *parent = nullptr);
    ~DeliveryWindow();

public slots:
    void getAdress(ShadowScreen::Data::Adress adress);
    void getDelivery(ShadowScreen::Data::Delivery delivery);

private slots:
    void on_pushButton_add_clicked();
    void on_pushButton_cancel_clicked();
    void on_pushButton_adress_clicked();

signals:
    void SendAdress(ShadowScreen::Data::Adress adress);
    void SendDelivery(ShadowScreen::Data::Delivery delivery);

private:
    Ui::DeliveryWindow *ui;
    AdressWindow* adress;

    ShadowScreen::Data::Delivery delivery;
};

#endif // DELIVERYWINDOW_H
