#ifndef BANKCARDWINDOW_H
#define BANKCARDWINDOW_H

#include <QDialog>

namespace Ui {
class Bankcard;
}

class Bankcard : public QDialog
{
    Q_OBJECT

public:
    explicit Bankcard(QWidget *parent = nullptr);
    ~Bankcard();

private:
    Ui::Bankcard *ui;
};

#endif // BANKCARDWINDOW_H
