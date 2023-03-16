#ifndef DETAILSETWINDOW_H
#define DETAILSETWINDOW_H

#include <QDialog>
#include <QMessageBox>
#include <QFileDialog>
#include "Computer/computer.h"

namespace Ui {
class DetailSetWindow;
}

using namespace ShadowScreen::computer;

class DetailSetWindow : public QDialog
{
    Q_OBJECT

public:
    explicit DetailSetWindow(QWidget *parent = nullptr);
    ~DetailSetWindow();

private:
    Ui::DetailSetWindow *ui;

    QPixmap image;
    QString description;
    QString status;
    bool isSale;

    void init();

public slots:
    void receiveData(ShadowScreen::computer::Detail* data, ShadowScreen::computer::DetailInfo* datainfo);

private slots:
    void on_pushButton_File_clicked();
    void on_pushButton_Save_clicked();
    void on_radioButton_Sale_clicked();
};

#endif // DETAILSETWINDOW_H
