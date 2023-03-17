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

    initField();
}


void ReviewWindow::on_pushButton_cancel_clicked()
{

}

