#include "reviewwindow.h"
#include "ui_reviewwindow.h"

ReviewWindow::ReviewWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReviewWindow)
{
    ui->setupUi(this);
    review = Data::Review();
}

ReviewWindow::~ReviewWindow() {
    delete ui;
}

void ReviewWindow::on_pushButton_add_clicked() {
    review.setTitle(ui->textEdit_Title->toPlainText());
    review.setDescription(ui->textEdit_description->toPlainText());
    review.setMark(ui->spinBox_mark->value());

    emit SendReview(review);

    initField();
}


void ReviewWindow::on_pushButton_cancel_clicked() {
    close();
}

void ReviewWindow::initField() {
    ui->textEdit_Title->setPlainText("");
    ui->textEdit_description->setPlainText("");
    ui->spinBox_mark->setValue(1);
}

