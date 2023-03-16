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

private:
    Ui::MyReviewWindow *ui;
};

#endif // MYREVIEWWINDOW_H
