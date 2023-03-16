#ifndef SHADOWWINDOW_H
#define SHADOWWINDOW_H

#include <QMainWindow>

#include "Windows/Other/registrationwindow.h"
#include "Windows/Detail/detailsetwindow.h"
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

    RegistrationWindow* regist;
    DetailSetWindow* detailset;

    void setUser(User user);
    void initComputer(Computer computer);

public slots:
    void onRegistrationSuccess(QString username, QString password);

private slots:
    void on_pushButton_CPU_clicked();
    void on_pushButton_GPU_clicked();
    void on_pushButton_STORAGE_clicked();
    void on_pushButton_MEMORYCHIP_clicked();
    void on_pushButton_BASEBOARD_clicked();

signals:
    void SendDatainfo(ShadowScreen::user::Detail* data, ShadowScreen::computer::DetailInfo* datainfo);


};
#endif // SHADOWWINDOW_H
