#ifndef SHADOWWINDOW_H
#define SHADOWWINDOW_H

#define path_image_search           "png/low/search.png"
#define path_image_computer         "png/low/computer.png"
#define path_image_profile          "png/low/profile.png"

#define path_image_review_bad       "png/Review/bad.png"
#define path_image_review_normal    "png/Review/normal.png"
#define path_image_review_great     "png/Review/great.png"

#define path_image_cpu              "png/Detail/cpu.png"
#define path_image_gpu              "png/Detail/gpu.png"
#define path_image_baseboard        "png/Detail/baseboard.png"
#define path_image_storage          "png/Detail/storage.png"
#define path_image_memorychip       "png/Detail/memorychip.png"

#include <QMainWindow>

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

    // detail window
    DetailSetWindow*        detailset;

    // Data window
    UserDataWindow*         aboutme;
    ReviewWindow*           reviewadd;

    // my user data
    MyBankcardWindow*       bankcard;
    MyReviewWindow*         review;
    MyDeliveryWindow*       delivery;


    // IMAGES
    QPixmap image_search;
    QPixmap image_computer;
    QPixmap image_profile;

    QPixmap image_review_bad;
    QPixmap image_review_normal;
    QPixmap image_review_great;

    // IMAGE DETAIL
    QPixmap image_cpu_static;
    QPixmap image_gpu_static;
    QPixmap image_storage_static;
    QPixmap image_memorychip_static;
    QPixmap image_baseboard_static;

    void setUser(User user);
    void initComputer(Computer computer);
    void setImageDetails();
    void updateReviewImage();

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
};
#endif // SHADOWWINDOW_H
