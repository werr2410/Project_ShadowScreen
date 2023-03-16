#ifndef MYREVIEWWINDOW_H
#define MYREVIEWWINDOW_H

#include <QDialog>

namespace Ui {
class MyReviewWindow;
}

class MyReviewWindow : public QDialog
{
    Q_OBJECT

public:
    explicit MyReviewWindow(QWidget *parent = nullptr);
    ~MyReviewWindow();

private slots:
    void on_pushButton_close_clicked();

public slots:
    void getCountMark(int count, float mark);

private:
    Ui::MyReviewWindow *ui;

    int count;
    float mark;
};

#endif // MYREVIEWWINDOW_H
