#include "myreviewwindow.h"
#include "ui_myreviewwindow.h"

MyReviewWindow::MyReviewWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyReviewWindow)
{
    ui->setupUi(this);

    count = 0;
    mark = 0;
}

MyReviewWindow::~MyReviewWindow()
{
    delete ui;
}

void MyReviewWindow::on_pushButton_close_clicked() {
    close();
}

void MyReviewWindow::getCountMark(int count, float mark) {
    this->count = count;
    this->mark  = mark;

    ui->label_mark_set  ->setText(QString().setNum(mark));
    ui->label_count_set ->setText(QString().setNum(count));

}

