/********************************************************************************
** Form generated from reading UI file 'shadowwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHADOWWINDOW_H
#define UI_SHADOWWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShadowWindow
{
public:
    QAction *actionPush;
    QAction *actionPull;
    QAction *actionMy_Review;
    QAction *actionChat;
    QAction *actionadd;
    QAction *actionreset_set_adress;
    QWidget *centralwidget;
    QFrame *line_between_Seacrh_Computer;
    QFrame *line_between_Computer_User;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QLabel *label_IMAGE_cpu;
    QLabel *label_manufacturer_cpu;
    QLabel *label_manufacturer_gpu;
    QLabel *label_manufacture_set_cpu;
    QGroupBox *groupBox_3;
    QLabel *label_IMAGE_gpu;
    QLabel *label_manufacturer;
    QLabel *label_manufacturer_set_gpu;
    QGroupBox *groupBox_4;
    QLabel *label_image_storage;
    QLabel *label_manufacturer_2;
    QLabel *label_manufacturer_set_storage;
    QGroupBox *groupBox_5;
    QLabel *label_IMAGE_memorychip;
    QLabel *label_manufacturer_mamorychip;
    QLabel *label_manufacturer_set_memorychip;
    QGroupBox *groupBox_6;
    QLabel *label_IMAGE_baseboard;
    QLabel *label_manufacturer_baseboard;
    QLabel *label_manufacturer_set_baseboard;
    QPushButton *pushButton_CPU;
    QPushButton *pushButton_GPU;
    QPushButton *pushButton_STORAGE;
    QPushButton *pushButton_MEMORYCHIP;
    QPushButton *pushButton_BASEBOARD;
    QTextEdit *textEdit_Seacrh;
    QPushButton *pushButton_Search;
    QComboBox *comboBox_Order;
    QLabel *label_Order;
    QLabel *label_Count;
    QFrame *line_Search;
    QLabel *label_Count_set;
    QFrame *line_Down;
    QLabel *label_username;
    QLabel *label_username_set;
    QPushButton *pushButton_MyDelivery;
    QPushButton *pushButton_MyBankcard;
    QPushButton *pushButton_AboutMe;
    QPushButton *pushButton_Chats;
    QPushButton *pushButton_Telegram;
    QPushButton *pushButton_HelpMe;
    QPushButton *pushButton_MyReview;
    QPushButton *pushButton_Manual;
    QLabel *label_review;
    QLabel *label_reviwcount_set;
    QLabel *label_IMAGE_review;
    QLabel *label_IMAGE_Seacrh;
    QLabel *label_IMAGE_myComputer;
    QLabel *label_IMAGE_profile;
    QMenuBar *menubar;
    QMenu *menuUser;
    QMenu *menuData;
    QMenu *menuDelivery;
    QMenu *menuAdress;
    QMenu *menuDatabase;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ShadowWindow)
    {
        if (ShadowWindow->objectName().isEmpty())
            ShadowWindow->setObjectName("ShadowWindow");
        ShadowWindow->resize(1290, 627);
        actionPush = new QAction(ShadowWindow);
        actionPush->setObjectName("actionPush");
        actionPull = new QAction(ShadowWindow);
        actionPull->setObjectName("actionPull");
        actionMy_Review = new QAction(ShadowWindow);
        actionMy_Review->setObjectName("actionMy_Review");
        actionChat = new QAction(ShadowWindow);
        actionChat->setObjectName("actionChat");
        actionadd = new QAction(ShadowWindow);
        actionadd->setObjectName("actionadd");
        actionreset_set_adress = new QAction(ShadowWindow);
        actionreset_set_adress->setObjectName("actionreset_set_adress");
        centralwidget = new QWidget(ShadowWindow);
        centralwidget->setObjectName("centralwidget");
        line_between_Seacrh_Computer = new QFrame(centralwidget);
        line_between_Seacrh_Computer->setObjectName("line_between_Seacrh_Computer");
        line_between_Seacrh_Computer->setGeometry(QRect(350, -20, 20, 621));
        line_between_Seacrh_Computer->setFrameShape(QFrame::VLine);
        line_between_Seacrh_Computer->setFrameShadow(QFrame::Sunken);
        line_between_Computer_User = new QFrame(centralwidget);
        line_between_Computer_User->setObjectName("line_between_Computer_User");
        line_between_Computer_User->setGeometry(QRect(840, -10, 20, 621));
        line_between_Computer_User->setFrameShape(QFrame::VLine);
        line_between_Computer_User->setFrameShadow(QFrame::Sunken);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(380, 10, 461, 521));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(10, 30, 401, 90));
        label_IMAGE_cpu = new QLabel(groupBox_2);
        label_IMAGE_cpu->setObjectName("label_IMAGE_cpu");
        label_IMAGE_cpu->setGeometry(QRect(10, 30, 61, 41));
        label_manufacturer_cpu = new QLabel(groupBox_2);
        label_manufacturer_cpu->setObjectName("label_manufacturer_cpu");
        label_manufacturer_cpu->setGeometry(QRect(90, 30, 81, 16));
        label_manufacturer_gpu = new QLabel(groupBox_2);
        label_manufacturer_gpu->setObjectName("label_manufacturer_gpu");
        label_manufacturer_gpu->setGeometry(QRect(90, 130, 81, 16));
        label_manufacture_set_cpu = new QLabel(groupBox_2);
        label_manufacture_set_cpu->setObjectName("label_manufacture_set_cpu");
        label_manufacture_set_cpu->setGeometry(QRect(90, 51, 291, 20));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(10, 130, 401, 90));
        label_IMAGE_gpu = new QLabel(groupBox_3);
        label_IMAGE_gpu->setObjectName("label_IMAGE_gpu");
        label_IMAGE_gpu->setGeometry(QRect(10, 30, 61, 41));
        label_manufacturer = new QLabel(groupBox_3);
        label_manufacturer->setObjectName("label_manufacturer");
        label_manufacturer->setGeometry(QRect(90, 30, 81, 16));
        label_manufacturer_set_gpu = new QLabel(groupBox_3);
        label_manufacturer_set_gpu->setObjectName("label_manufacturer_set_gpu");
        label_manufacturer_set_gpu->setGeometry(QRect(90, 45, 301, 31));
        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(10, 230, 401, 90));
        label_image_storage = new QLabel(groupBox_4);
        label_image_storage->setObjectName("label_image_storage");
        label_image_storage->setGeometry(QRect(10, 30, 61, 41));
        label_manufacturer_2 = new QLabel(groupBox_4);
        label_manufacturer_2->setObjectName("label_manufacturer_2");
        label_manufacturer_2->setGeometry(QRect(90, 30, 81, 16));
        label_manufacturer_set_storage = new QLabel(groupBox_4);
        label_manufacturer_set_storage->setObjectName("label_manufacturer_set_storage");
        label_manufacturer_set_storage->setGeometry(QRect(90, 46, 291, 31));
        groupBox_5 = new QGroupBox(groupBox);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setGeometry(QRect(10, 320, 401, 90));
        label_IMAGE_memorychip = new QLabel(groupBox_5);
        label_IMAGE_memorychip->setObjectName("label_IMAGE_memorychip");
        label_IMAGE_memorychip->setGeometry(QRect(10, 30, 61, 41));
        label_manufacturer_mamorychip = new QLabel(groupBox_5);
        label_manufacturer_mamorychip->setObjectName("label_manufacturer_mamorychip");
        label_manufacturer_mamorychip->setGeometry(QRect(80, 30, 81, 16));
        label_manufacturer_set_memorychip = new QLabel(groupBox_5);
        label_manufacturer_set_memorychip->setObjectName("label_manufacturer_set_memorychip");
        label_manufacturer_set_memorychip->setGeometry(QRect(80, 40, 311, 41));
        groupBox_6 = new QGroupBox(groupBox);
        groupBox_6->setObjectName("groupBox_6");
        groupBox_6->setGeometry(QRect(10, 420, 401, 90));
        label_IMAGE_baseboard = new QLabel(groupBox_6);
        label_IMAGE_baseboard->setObjectName("label_IMAGE_baseboard");
        label_IMAGE_baseboard->setGeometry(QRect(10, 30, 61, 41));
        label_manufacturer_baseboard = new QLabel(groupBox_6);
        label_manufacturer_baseboard->setObjectName("label_manufacturer_baseboard");
        label_manufacturer_baseboard->setGeometry(QRect(80, 30, 81, 16));
        label_manufacturer_set_baseboard = new QLabel(groupBox_6);
        label_manufacturer_set_baseboard->setObjectName("label_manufacturer_set_baseboard");
        label_manufacturer_set_baseboard->setGeometry(QRect(80, 40, 301, 41));
        pushButton_CPU = new QPushButton(groupBox);
        pushButton_CPU->setObjectName("pushButton_CPU");
        pushButton_CPU->setGeometry(QRect(420, 40, 31, 80));
        pushButton_GPU = new QPushButton(groupBox);
        pushButton_GPU->setObjectName("pushButton_GPU");
        pushButton_GPU->setGeometry(QRect(420, 140, 31, 80));
        pushButton_STORAGE = new QPushButton(groupBox);
        pushButton_STORAGE->setObjectName("pushButton_STORAGE");
        pushButton_STORAGE->setGeometry(QRect(420, 240, 31, 80));
        pushButton_MEMORYCHIP = new QPushButton(groupBox);
        pushButton_MEMORYCHIP->setObjectName("pushButton_MEMORYCHIP");
        pushButton_MEMORYCHIP->setGeometry(QRect(420, 330, 31, 80));
        pushButton_BASEBOARD = new QPushButton(groupBox);
        pushButton_BASEBOARD->setObjectName("pushButton_BASEBOARD");
        pushButton_BASEBOARD->setGeometry(QRect(420, 430, 31, 80));
        textEdit_Seacrh = new QTextEdit(centralwidget);
        textEdit_Seacrh->setObjectName("textEdit_Seacrh");
        textEdit_Seacrh->setGeometry(QRect(10, 20, 271, 31));
        pushButton_Search = new QPushButton(centralwidget);
        pushButton_Search->setObjectName("pushButton_Search");
        pushButton_Search->setGeometry(QRect(290, 20, 61, 31));
        comboBox_Order = new QComboBox(centralwidget);
        comboBox_Order->setObjectName("comboBox_Order");
        comboBox_Order->setGeometry(QRect(60, 60, 121, 20));
        label_Order = new QLabel(centralwidget);
        label_Order->setObjectName("label_Order");
        label_Order->setGeometry(QRect(10, 60, 49, 20));
        label_Count = new QLabel(centralwidget);
        label_Count->setObjectName("label_Count");
        label_Count->setGeometry(QRect(210, 60, 49, 20));
        line_Search = new QFrame(centralwidget);
        line_Search->setObjectName("line_Search");
        line_Search->setGeometry(QRect(0, 90, 361, 16));
        line_Search->setFrameShape(QFrame::HLine);
        line_Search->setFrameShadow(QFrame::Sunken);
        label_Count_set = new QLabel(centralwidget);
        label_Count_set->setObjectName("label_Count_set");
        label_Count_set->setGeometry(QRect(260, 60, 31, 20));
        line_Down = new QFrame(centralwidget);
        line_Down->setObjectName("line_Down");
        line_Down->setGeometry(QRect(0, 530, 1291, 21));
        line_Down->setFrameShape(QFrame::HLine);
        line_Down->setFrameShadow(QFrame::Sunken);
        label_username = new QLabel(centralwidget);
        label_username->setObjectName("label_username");
        label_username->setGeometry(QRect(870, 10, 81, 16));
        label_username_set = new QLabel(centralwidget);
        label_username_set->setObjectName("label_username_set");
        label_username_set->setGeometry(QRect(940, 10, 70, 16));
        pushButton_MyDelivery = new QPushButton(centralwidget);
        pushButton_MyDelivery->setObjectName("pushButton_MyDelivery");
        pushButton_MyDelivery->setGeometry(QRect(870, 190, 401, 24));
        pushButton_MyBankcard = new QPushButton(centralwidget);
        pushButton_MyBankcard->setObjectName("pushButton_MyBankcard");
        pushButton_MyBankcard->setGeometry(QRect(870, 230, 401, 24));
        pushButton_AboutMe = new QPushButton(centralwidget);
        pushButton_AboutMe->setObjectName("pushButton_AboutMe");
        pushButton_AboutMe->setGeometry(QRect(870, 270, 401, 24));
        pushButton_Chats = new QPushButton(centralwidget);
        pushButton_Chats->setObjectName("pushButton_Chats");
        pushButton_Chats->setGeometry(QRect(870, 310, 401, 24));
        pushButton_Telegram = new QPushButton(centralwidget);
        pushButton_Telegram->setObjectName("pushButton_Telegram");
        pushButton_Telegram->setGeometry(QRect(870, 350, 401, 24));
        pushButton_HelpMe = new QPushButton(centralwidget);
        pushButton_HelpMe->setObjectName("pushButton_HelpMe");
        pushButton_HelpMe->setGeometry(QRect(870, 500, 401, 24));
        pushButton_MyReview = new QPushButton(centralwidget);
        pushButton_MyReview->setObjectName("pushButton_MyReview");
        pushButton_MyReview->setGeometry(QRect(870, 420, 401, 24));
        pushButton_Manual = new QPushButton(centralwidget);
        pushButton_Manual->setObjectName("pushButton_Manual");
        pushButton_Manual->setGeometry(QRect(870, 460, 401, 24));
        label_review = new QLabel(centralwidget);
        label_review->setObjectName("label_review");
        label_review->setGeometry(QRect(1110, 10, 49, 16));
        label_reviwcount_set = new QLabel(centralwidget);
        label_reviwcount_set->setObjectName("label_reviwcount_set");
        label_reviwcount_set->setGeometry(QRect(1160, 10, 49, 20));
        label_IMAGE_review = new QLabel(centralwidget);
        label_IMAGE_review->setObjectName("label_IMAGE_review");
        label_IMAGE_review->setGeometry(QRect(1090, 40, 141, 81));
        label_IMAGE_Seacrh = new QLabel(centralwidget);
        label_IMAGE_Seacrh->setObjectName("label_IMAGE_Seacrh");
        label_IMAGE_Seacrh->setGeometry(QRect(50, 550, 151, 31));
        label_IMAGE_myComputer = new QLabel(centralwidget);
        label_IMAGE_myComputer->setObjectName("label_IMAGE_myComputer");
        label_IMAGE_myComputer->setGeometry(QRect(530, 550, 151, 31));
        label_IMAGE_profile = new QLabel(centralwidget);
        label_IMAGE_profile->setObjectName("label_IMAGE_profile");
        label_IMAGE_profile->setGeometry(QRect(1000, 550, 151, 31));
        ShadowWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ShadowWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1290, 21));
        menuUser = new QMenu(menubar);
        menuUser->setObjectName("menuUser");
        menuData = new QMenu(menubar);
        menuData->setObjectName("menuData");
        menuDelivery = new QMenu(menuData);
        menuDelivery->setObjectName("menuDelivery");
        menuAdress = new QMenu(menuData);
        menuAdress->setObjectName("menuAdress");
        menuDatabase = new QMenu(menubar);
        menuDatabase->setObjectName("menuDatabase");
        ShadowWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ShadowWindow);
        statusbar->setObjectName("statusbar");
        ShadowWindow->setStatusBar(statusbar);

        menubar->addAction(menuUser->menuAction());
        menubar->addAction(menuData->menuAction());
        menubar->addAction(menuDatabase->menuAction());
        menuUser->addAction(actionMy_Review);
        menuUser->addAction(actionChat);
        menuData->addAction(menuDelivery->menuAction());
        menuData->addAction(menuAdress->menuAction());
        menuDelivery->addAction(actionadd);
        menuAdress->addAction(actionreset_set_adress);
        menuDatabase->addAction(actionPush);
        menuDatabase->addAction(actionPull);

        retranslateUi(ShadowWindow);

        QMetaObject::connectSlotsByName(ShadowWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ShadowWindow)
    {
        ShadowWindow->setWindowTitle(QCoreApplication::translate("ShadowWindow", "ShadowWindow", nullptr));
        actionPush->setText(QCoreApplication::translate("ShadowWindow", "Push", nullptr));
        actionPull->setText(QCoreApplication::translate("ShadowWindow", "Pull", nullptr));
        actionMy_Review->setText(QCoreApplication::translate("ShadowWindow", "My Review", nullptr));
        actionChat->setText(QCoreApplication::translate("ShadowWindow", "Chat", nullptr));
        actionadd->setText(QCoreApplication::translate("ShadowWindow", "add", nullptr));
        actionreset_set_adress->setText(QCoreApplication::translate("ShadowWindow", "reset|set adress", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ShadowWindow", "MyComputer", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ShadowWindow", "CPU", nullptr));
        label_IMAGE_cpu->setText(QCoreApplication::translate("ShadowWindow", "image_cpu", nullptr));
        label_manufacturer_cpu->setText(QCoreApplication::translate("ShadowWindow", "manufacturer:", nullptr));
        label_manufacturer_gpu->setText(QCoreApplication::translate("ShadowWindow", "manufacturer:", nullptr));
        label_manufacture_set_cpu->setText(QCoreApplication::translate("ShadowWindow", "value", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("ShadowWindow", "GPU", nullptr));
        label_IMAGE_gpu->setText(QCoreApplication::translate("ShadowWindow", "image_gpu", nullptr));
        label_manufacturer->setText(QCoreApplication::translate("ShadowWindow", "manufacturer:", nullptr));
        label_manufacturer_set_gpu->setText(QCoreApplication::translate("ShadowWindow", "value", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("ShadowWindow", "Storage", nullptr));
        label_image_storage->setText(QCoreApplication::translate("ShadowWindow", "image_strg", nullptr));
        label_manufacturer_2->setText(QCoreApplication::translate("ShadowWindow", "manufacturer:", nullptr));
        label_manufacturer_set_storage->setText(QCoreApplication::translate("ShadowWindow", "value", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("ShadowWindow", "Memorychip", nullptr));
        label_IMAGE_memorychip->setText(QCoreApplication::translate("ShadowWindow", "image_mc", nullptr));
        label_manufacturer_mamorychip->setText(QCoreApplication::translate("ShadowWindow", "manufacturer:", nullptr));
        label_manufacturer_set_memorychip->setText(QCoreApplication::translate("ShadowWindow", "value", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("ShadowWindow", "Baseboard", nullptr));
        label_IMAGE_baseboard->setText(QCoreApplication::translate("ShadowWindow", "image_bas", nullptr));
        label_manufacturer_baseboard->setText(QCoreApplication::translate("ShadowWindow", "manufacturer:", nullptr));
        label_manufacturer_set_baseboard->setText(QCoreApplication::translate("ShadowWindow", "value", nullptr));
        pushButton_CPU->setText(QString());
        pushButton_GPU->setText(QString());
        pushButton_STORAGE->setText(QString());
        pushButton_MEMORYCHIP->setText(QString());
        pushButton_BASEBOARD->setText(QString());
        pushButton_Search->setText(QString());
        label_Order->setText(QCoreApplication::translate("ShadowWindow", "Order:", nullptr));
        label_Count->setText(QCoreApplication::translate("ShadowWindow", "count:", nullptr));
        label_Count_set->setText(QCoreApplication::translate("ShadowWindow", "0", nullptr));
        label_username->setText(QCoreApplication::translate("ShadowWindow", "USERNAME:", nullptr));
        label_username_set->setText(QCoreApplication::translate("ShadowWindow", "username", nullptr));
        pushButton_MyDelivery->setText(QCoreApplication::translate("ShadowWindow", "My Delivery >>>", nullptr));
        pushButton_MyBankcard->setText(QCoreApplication::translate("ShadowWindow", "My Bankcard >>>", nullptr));
        pushButton_AboutMe->setText(QCoreApplication::translate("ShadowWindow", "About me >>>", nullptr));
        pushButton_Chats->setText(QCoreApplication::translate("ShadowWindow", "Chats >>>", nullptr));
        pushButton_Telegram->setText(QCoreApplication::translate("ShadowWindow", "Telegram >>>", nullptr));
        pushButton_HelpMe->setText(QCoreApplication::translate("ShadowWindow", "Help me >>>", nullptr));
        pushButton_MyReview->setText(QCoreApplication::translate("ShadowWindow", "My reviews >>>", nullptr));
        pushButton_Manual->setText(QCoreApplication::translate("ShadowWindow", "Manual >>>", nullptr));
        label_review->setText(QCoreApplication::translate("ShadowWindow", "Review:", nullptr));
        label_reviwcount_set->setText(QCoreApplication::translate("ShadowWindow", "0.0", nullptr));
        label_IMAGE_review->setText(QCoreApplication::translate("ShadowWindow", "IMAGE-REVIEW-STATUS", nullptr));
        label_IMAGE_Seacrh->setText(QCoreApplication::translate("ShadowWindow", "Image ", nullptr));
        label_IMAGE_myComputer->setText(QCoreApplication::translate("ShadowWindow", "Image ", nullptr));
        label_IMAGE_profile->setText(QCoreApplication::translate("ShadowWindow", "Image ", nullptr));
        menuUser->setTitle(QCoreApplication::translate("ShadowWindow", "User", nullptr));
        menuData->setTitle(QCoreApplication::translate("ShadowWindow", "Data", nullptr));
        menuDelivery->setTitle(QCoreApplication::translate("ShadowWindow", "Delivery", nullptr));
        menuAdress->setTitle(QCoreApplication::translate("ShadowWindow", "Adress", nullptr));
        menuDatabase->setTitle(QCoreApplication::translate("ShadowWindow", "Database", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShadowWindow: public Ui_ShadowWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHADOWWINDOW_H
