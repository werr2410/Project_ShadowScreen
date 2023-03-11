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
    QAction *actionDe_ivery;
    QAction *actionAdress;
    QAction *actionPush;
    QAction *actionPull;
    QAction *actionMy_Review;
    QAction *actionChat;
    QWidget *centralwidget;
    QFrame *line;
    QFrame *line_2;
    QGroupBox *groupBox;
    QScrollBar *verticalScrollBar;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QLabel *label;
    QLabel *label_2;
    QFrame *line_3;
    QLabel *label_3;
    QFrame *line_4;
    QMenuBar *menubar;
    QMenu *menuUser;
    QMenu *menuData;
    QMenu *menuDatabase;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ShadowWindow)
    {
        if (ShadowWindow->objectName().isEmpty())
            ShadowWindow->setObjectName("ShadowWindow");
        ShadowWindow->resize(1290, 627);
        actionDe_ivery = new QAction(ShadowWindow);
        actionDe_ivery->setObjectName("actionDe_ivery");
        actionAdress = new QAction(ShadowWindow);
        actionAdress->setObjectName("actionAdress");
        actionPush = new QAction(ShadowWindow);
        actionPush->setObjectName("actionPush");
        actionPull = new QAction(ShadowWindow);
        actionPull->setObjectName("actionPull");
        actionMy_Review = new QAction(ShadowWindow);
        actionMy_Review->setObjectName("actionMy_Review");
        actionChat = new QAction(ShadowWindow);
        actionChat->setObjectName("actionChat");
        centralwidget = new QWidget(ShadowWindow);
        centralwidget->setObjectName("centralwidget");
        line = new QFrame(centralwidget);
        line->setObjectName("line");
        line->setGeometry(QRect(350, -20, 20, 621));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(840, -10, 20, 621));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(370, 10, 461, 521));
        verticalScrollBar = new QScrollBar(groupBox);
        verticalScrollBar->setObjectName("verticalScrollBar");
        verticalScrollBar->setGeometry(QRect(450, 20, 16, 501));
        verticalScrollBar->setOrientation(Qt::Vertical);
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(10, 20, 271, 31));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(290, 20, 61, 31));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(60, 60, 121, 20));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 60, 49, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(210, 60, 49, 20));
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(0, 90, 361, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(260, 60, 31, 20));
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(0, 530, 1291, 21));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        ShadowWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ShadowWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1290, 21));
        menuUser = new QMenu(menubar);
        menuUser->setObjectName("menuUser");
        menuData = new QMenu(menubar);
        menuData->setObjectName("menuData");
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
        menuData->addAction(actionDe_ivery);
        menuData->addAction(actionAdress);
        menuDatabase->addAction(actionPush);
        menuDatabase->addAction(actionPull);

        retranslateUi(ShadowWindow);

        QMetaObject::connectSlotsByName(ShadowWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ShadowWindow)
    {
        ShadowWindow->setWindowTitle(QCoreApplication::translate("ShadowWindow", "ShadowWindow", nullptr));
        actionDe_ivery->setText(QCoreApplication::translate("ShadowWindow", "Delivery", nullptr));
        actionAdress->setText(QCoreApplication::translate("ShadowWindow", "Adress", nullptr));
        actionPush->setText(QCoreApplication::translate("ShadowWindow", "Push", nullptr));
        actionPull->setText(QCoreApplication::translate("ShadowWindow", "Pull", nullptr));
        actionMy_Review->setText(QCoreApplication::translate("ShadowWindow", "My Review", nullptr));
        actionChat->setText(QCoreApplication::translate("ShadowWindow", "Chat", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ShadowWindow", "MyComputer", nullptr));
        pushButton->setText(QString());
        label->setText(QCoreApplication::translate("ShadowWindow", "Order:", nullptr));
        label_2->setText(QCoreApplication::translate("ShadowWindow", "count:", nullptr));
        label_3->setText(QCoreApplication::translate("ShadowWindow", "0", nullptr));
        menuUser->setTitle(QCoreApplication::translate("ShadowWindow", "User", nullptr));
        menuData->setTitle(QCoreApplication::translate("ShadowWindow", "Data", nullptr));
        menuDatabase->setTitle(QCoreApplication::translate("ShadowWindow", "Database", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShadowWindow: public Ui_ShadowWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHADOWWINDOW_H
