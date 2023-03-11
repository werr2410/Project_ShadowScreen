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
#include <QtWidgets/QScrollBar>
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
    QScrollBar *verticalScrollBar;
    QTextEdit *textEdit_Seacrh;
    QPushButton *pushButton_Search;
    QComboBox *comboBox_Order;
    QLabel *label_Order;
    QLabel *label_Count;
    QFrame *line_Search;
    QLabel *label_Count_set;
    QFrame *line_Down;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
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
        groupBox->setGeometry(QRect(370, 10, 461, 521));
        verticalScrollBar = new QScrollBar(groupBox);
        verticalScrollBar->setObjectName("verticalScrollBar");
        verticalScrollBar->setGeometry(QRect(450, 20, 16, 501));
        verticalScrollBar->setOrientation(Qt::Vertical);
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
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(870, 10, 81, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(940, 10, 70, 16));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(870, 190, 401, 24));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(870, 230, 401, 24));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(870, 270, 401, 24));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(870, 310, 401, 24));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(870, 350, 401, 24));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(870, 500, 401, 24));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(870, 420, 401, 24));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(870, 460, 401, 24));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(1110, 10, 49, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(1160, 10, 49, 20));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(1090, 40, 141, 81));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(50, 550, 151, 31));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(530, 550, 151, 31));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(1000, 550, 151, 31));
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
        pushButton_Search->setText(QString());
        label_Order->setText(QCoreApplication::translate("ShadowWindow", "Order:", nullptr));
        label_Count->setText(QCoreApplication::translate("ShadowWindow", "count:", nullptr));
        label_Count_set->setText(QCoreApplication::translate("ShadowWindow", "0", nullptr));
        label->setText(QCoreApplication::translate("ShadowWindow", "USERNAME:", nullptr));
        label_2->setText(QCoreApplication::translate("ShadowWindow", "username", nullptr));
        pushButton->setText(QCoreApplication::translate("ShadowWindow", "My Delivery >>>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ShadowWindow", "My Bankcard >>>", nullptr));
        pushButton_3->setText(QCoreApplication::translate("ShadowWindow", "About me >>>", nullptr));
        pushButton_4->setText(QCoreApplication::translate("ShadowWindow", "Chats >>>", nullptr));
        pushButton_5->setText(QCoreApplication::translate("ShadowWindow", "Telegram >>>", nullptr));
        pushButton_6->setText(QCoreApplication::translate("ShadowWindow", "Help me >>>", nullptr));
        pushButton_7->setText(QCoreApplication::translate("ShadowWindow", "My reviews >>>", nullptr));
        pushButton_8->setText(QCoreApplication::translate("ShadowWindow", "Manual >>>", nullptr));
        label_3->setText(QCoreApplication::translate("ShadowWindow", "Review:", nullptr));
        label_4->setText(QCoreApplication::translate("ShadowWindow", "0.0", nullptr));
        label_5->setText(QCoreApplication::translate("ShadowWindow", "IMAGE-REVIEW-STATUS", nullptr));
        label_6->setText(QCoreApplication::translate("ShadowWindow", "Image ", nullptr));
        label_7->setText(QCoreApplication::translate("ShadowWindow", "Image ", nullptr));
        label_8->setText(QCoreApplication::translate("ShadowWindow", "Image ", nullptr));
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
