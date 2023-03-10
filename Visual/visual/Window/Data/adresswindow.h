#ifndef ADRESSWINDOW_H
#define ADRESSWINDOW_H

#include <QDialog>

namespace Ui {
class AdressWindow;
}

class AdressWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AdressWindow(QWidget *parent = nullptr);
    ~AdressWindow();

private:
    Ui::AdressWindow *ui;
};

#endif // ADRESSWINDOW_H
