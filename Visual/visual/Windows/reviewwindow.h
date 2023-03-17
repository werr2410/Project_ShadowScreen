#ifndef REVIEWWINDOW_H
#define REVIEWWINDOW_H

#include <QDialog>
#include "Data/review.h"

namespace Ui {
class ReviewWindow;
}

using namespace ShadowScreen;

class ReviewWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ReviewWindow(QWidget *parent = nullptr);
    ~ReviewWindow();

signals:
    void SendReview(ShadowScreen::Data::Review review);

private slots:
    void on_pushButton_add_clicked();
    void on_pushButton_cancel_clicked();

private:
    Ui::ReviewWindow *ui;
    Data::Review review;

    void initField();
};


#endif // REVIEWWINDOW_H
