#include "helpmewindow.h"
#include "ui_helpmewindow.h"

HelpmeWindow::HelpmeWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HelpmeWindow)
{
    ui->setupUi(this);
}

HelpmeWindow::~HelpmeWindow()
{
    delete ui;
}
