#include "myreviewwindow.h"
#include "ui_myreviewwindow.h"

MyReviewWindow::MyReviewWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyReviewWindow)
{
    ui->setupUi(this);
}

MyReviewWindow::~MyReviewWindow()
{
    delete ui;
}
