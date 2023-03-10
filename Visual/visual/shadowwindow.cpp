#include "shadowwindow.h"
#include "ui_shadowwindow.h"

ShadowWindow::ShadowWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ShadowWindow)
{
    ui->setupUi(this);
}

ShadowWindow::~ShadowWindow()
{
    delete ui;
}

