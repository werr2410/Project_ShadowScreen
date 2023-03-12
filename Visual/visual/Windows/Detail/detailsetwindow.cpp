#include "detailsetwindow.h"
#include "ui_detailsetwindow.h"

DetailSetWindow::DetailSetWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DetailSetWindow)
{
    ui->setupUi(this);
}

DetailSetWindow::~DetailSetWindow()
{
    delete ui;
}
