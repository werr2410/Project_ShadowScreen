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
    QString title, description;
    int mark = 0;

    title = ui->textEdit_Title->placeholderText();
    description = ui->textEdit_2->placeholderText();
    mark = ui->spinBox_mark->value();

    review = Data::Review(title.isEmpty() ? "unknown" : title, description, mark);
}

