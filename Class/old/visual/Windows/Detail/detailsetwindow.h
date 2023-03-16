#ifndef DETAILSETWINDOW_H
#define DETAILSETWINDOW_H

#include <QDialog>

namespace Ui {
class DetailSetWindow;
}

class DetailSetWindow : public QDialog
{
    Q_OBJECT

public:
    explicit DetailSetWindow(QWidget *parent = nullptr);
    ~DetailSetWindow();

private:
    Ui::DetailSetWindow *ui;
};

#endif // DETAILSETWINDOW_H
