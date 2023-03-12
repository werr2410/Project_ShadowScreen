#ifndef SHADOWWINDOW_H
#define SHADOWWINDOW_H

#include <QMainWindow>

#include "Windows/Other/registrationwindow.h"
#include "User/user.h"

QT_BEGIN_NAMESPACE
namespace Ui { class ShadowWindow; }
QT_END_NAMESPACE

using namespace ShadowScreen::user;

class ShadowWindow : public QMainWindow
{
    Q_OBJECT

public:
    ShadowWindow(QWidget *parent = nullptr);
    ~ShadowWindow();

private:
    Ui::ShadowWindow *ui;
    User user;

    RegistrationWindow regist;

    void initComputer(Computer computer);
};
#endif // SHADOWWINDOW_H
