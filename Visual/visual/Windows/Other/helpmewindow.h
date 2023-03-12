#ifndef HELPMEWINDOW_H
#define HELPMEWINDOW_H

#include <QDialog>

namespace Ui {
class HelpmeWindow;
}

class HelpmeWindow : public QDialog
{
    Q_OBJECT

public:
    explicit HelpmeWindow(QWidget *parent = nullptr);
    ~HelpmeWindow();

private:
    Ui::HelpmeWindow *ui;
};

#endif // HELPMEWINDOW_H
