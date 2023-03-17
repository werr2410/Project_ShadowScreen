#ifndef SHADOWWINDOW_H
#define SHADOWWINDOW_H

#define path_image_review_bad       "png/Review/bad.png"
#define path_image_review_normal    "png/Review/nornal.png"
#define path_image_review_great     "png/Review/great.png"

#include <QMainWindow>

#include "Windows/Other/imageshowwindow.h"
#include "Windows/Other/registrationwindow.h"
#include "Windows/Other/telegramwindow.h"
#include "Windows/Other/helpmewindow.h"

#include "Windows/Detail/detailsetwindow.h"

#include "Windows/reviewwindow.h"
#include "Windows/User/Data/userdatawindow.h"

#include "Windows/User/mydeliverywindow.h"
#include "Windows/User/mybankcardwindow.h"
#include "Windows/User/myreviewwindow.h"

#include "User/user.h"

QT_BEGIN_NAMESPACE
namespace Ui { class ShadowWindow; }
QT_END_NAMESPACE

using namespace ShadowScreen::user;

class ShadowWindow : public QMainWindow {
    Q_OBJECT

public:
    ShadowWindow(QWidget *parent = nullptr);
    ~ShadowWindow();

private:
    Ui::ShadowWindow *ui;

    User user;

    // other window
    RegistrationWindow*     regist;
    TelegramWindow*         telegram;
    ImageShowWindow*        showimage;

    // detail window
    DetailSetWindow*        detailset;

    // Data window
    UserDataWindow*         aboutme;
    ReviewWindow*           reviewadd;

    // my user data
    MyBankcardWindow*       bankcard;
    MyReviewWindow*         review;
    MyDeliveryWindow*       delivery;

    // MEGA MANUAL
    HelpmeWindow*           helpme;

    // IMAGES

    QPixmap image_review_bad;
    QPixmap image_review_normal;
    QPixmap image_review_great;

    void setUser(User user);
    void initComputer(Computer computer);
    void setImageDetails();
    void updateReviewImage(int mark);

public slots:
    // registration
    void onRegistrationSuccess(QString username, QString password);

    // detail info
    void getDetailInfo(QString desc, QString status, QPixmap image, bool isSale, QString type);

    // about me
    void getAboutMe(ShadowScreen::user::User user);

    // my bankcard
    void getBankcard(QVector<ShadowScreen::Data::Bankcard> bankcard);

    // my delivery
    void getDelivery(QList<ShadowScreen::Data::Delivery> delivery);

    // review
    void getReviewUI(ShadowScreen::Data::Review review);

private slots:
    void on_pushButton_CPU_clicked();
    void on_pushButton_GPU_clicked();
    void on_pushButton_STORAGE_clicked();
    void on_pushButton_MEMORYCHIP_clicked();
    void on_pushButton_BASEBOARD_clicked();
    void on_pushButton_AboutMe_clicked();
    void on_pushButton_Telegram_clicked();
    void on_pushButton_MyBankcard_clicked();
    void on_pushButton_MyReview_clicked();
    void on_pushButton_MyDelivery_clicked();
    void on_pushButton_MyReview_2_clicked();
    void on_pushButton_HelpMe_clicked();
    void on_pushButton_Manual_clicked();

signals:
    // detail set
    void SendDatainfo(ShadowScreen::user::Detail* data, ShadowScreen::computer::DetailInfo* datainfo);

    // about me
    void SendAboutMe(ShadowScreen::user::User user);

    // telegram
    void SendTelegram(ShadowScreen::Data::Telegram telegram);

    // my bankcard
    void SendBankcard(QVector<ShadowScreen::Data::Bankcard> bankcard);

    // my review
    void SendReview(int count, float mark);

    // my delivery
    void SendDelivery(QList<ShadowScreen::Data::Delivery> delivery);

    //image show;
    void SendImage(QPixmap map);
};
#endif // SHADOWWINDOW_H
