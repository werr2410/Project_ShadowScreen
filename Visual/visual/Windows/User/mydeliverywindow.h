#ifndef MYDELIVERYWINDOW_H
#define MYDELIVERYWINDOW_H

#include <QDialog>

#include <QList>
#include "Windows/deliverywindow.h"
#include <QtCore/QMetaEnum>

namespace Ui {
class MyDeliveryWindow;
}

class MyDeliveryWindow : public QDialog {
    Q_OBJECT

public:
    explicit MyDeliveryWindow(QWidget *parent = nullptr);
    ~MyDeliveryWindow();

public slots:
    void getDeliveryList(QVector<ShadowScreen::Data::Delivery> delivery);
    void getDelivery(ShadowScreen::Data::Delivery delivery);

signals:
    void setDeliveryList(QList<ShadowScreen::Data::Delivery> delivery);
    void setDelivery(ShadowScreen::Data::Delivery delivery);

private slots:
    void on_pushButton_Add_clicked();
    void on_pushButton_close_clicked();
    void on_pushButton_Delete_clicked();

    void on_pushButton_Add_2_clicked();

private:
    Ui::MyDeliveryWindow *ui;
    DeliveryWindow* deliverywindow;

    QList<ShadowScreen::Data::Delivery> delivery;

    void updateTable();
};

#endif // MYDELIVERYWINDOW_H
