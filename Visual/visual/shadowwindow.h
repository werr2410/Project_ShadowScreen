#ifndef SHADOWWINDOW_H
#define SHADOWWINDOW_H

#include <QMainWindow>

#include "Windows/bankcardwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class ShadowWindow; }
QT_END_NAMESPACE

class ShadowWindow : public QMainWindow
{
    Q_OBJECT

public:
    ShadowWindow(QWidget *parent = nullptr);
    ~ShadowWindow();

private:
    Ui::ShadowWindow *ui;
    BankcardWindow bankwindow;
};
#endif // SHADOWWINDOW_H
