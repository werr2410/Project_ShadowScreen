#ifndef ADRESSWINDOW_H
#define ADRESSWINDOW_H

#include <QDialog>
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

private slots:
    void on_pushButton_clicked();

private:
    Ui::AdressWindow *ui;
    Data::Adress adress;
};

#endif // ADRESSWINDOW_H
