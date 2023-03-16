#ifndef ADRESSWINDOW_H
#define ADRESSWINDOW_H

#include <QDialog>
#include <QMessageBox>

#include "Data/adress.h"

namespace Ui {
class AdressWindow;
}

using namespace ShadowScreen;

class AdressWindow : public QDialog {
    Q_OBJECT

public:
    explicit AdressWindow(QWidget *parent = nullptr);
    ~AdressWindow();

public slots:
    void getAdress(ShadowScreen::Data::Adress adress);

private slots:
    void on_pushButton_add_clicked();
    void on_pushButton_Cancale_clicked();

private:
    Ui::AdressWindow *ui;
    Data::Adress adress;

signals:
    void SenderAdress(ShadowScreen::Data::Adress adress);
};

#endif // ADRESSWINDOW_H
