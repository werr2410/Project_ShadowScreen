/********************************************************************************
** Form generated from reading UI file 'telegramwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELEGRAMWINDOW_H
#define UI_TELEGRAMWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_TelegramWindow
{
public:
    QLabel *label_Username;
    QLabel *label_Usercode;
    QLabel *label_Chat;
    QLabel *label_username_set;
    QLabel *label_usercode_set;
    QLabel *label_6;

    void setupUi(QDialog *TelegramWindow)
    {
        if (TelegramWindow->objectName().isEmpty())
            TelegramWindow->setObjectName("TelegramWindow");
        TelegramWindow->resize(241, 136);
        label_Username = new QLabel(TelegramWindow);
        label_Username->setObjectName("label_Username");
        label_Username->setGeometry(QRect(30, 30, 71, 16));
        label_Usercode = new QLabel(TelegramWindow);
        label_Usercode->setObjectName("label_Usercode");
        label_Usercode->setGeometry(QRect(30, 60, 71, 16));
        label_Chat = new QLabel(TelegramWindow);
        label_Chat->setObjectName("label_Chat");
        label_Chat->setGeometry(QRect(30, 90, 71, 16));
        label_username_set = new QLabel(TelegramWindow);
        label_username_set->setObjectName("label_username_set");
        label_username_set->setGeometry(QRect(100, 30, 121, 16));
        label_usercode_set = new QLabel(TelegramWindow);
        label_usercode_set->setObjectName("label_usercode_set");
        label_usercode_set->setGeometry(QRect(100, 60, 111, 16));
        label_6 = new QLabel(TelegramWindow);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(100, 90, 111, 16));

        retranslateUi(TelegramWindow);

        QMetaObject::connectSlotsByName(TelegramWindow);
    } // setupUi

    void retranslateUi(QDialog *TelegramWindow)
    {
        TelegramWindow->setWindowTitle(QCoreApplication::translate("TelegramWindow", "Dialog", nullptr));
        label_Username->setText(QCoreApplication::translate("TelegramWindow", "Username:", nullptr));
        label_Usercode->setText(QCoreApplication::translate("TelegramWindow", "Usercode:", nullptr));
        label_Chat->setText(QCoreApplication::translate("TelegramWindow", "Chat:", nullptr));
        label_username_set->setText(QCoreApplication::translate("TelegramWindow", "username", nullptr));
        label_usercode_set->setText(QCoreApplication::translate("TelegramWindow", "usercode", nullptr));
        label_6->setText(QCoreApplication::translate("TelegramWindow", "chat", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelegramWindow: public Ui_TelegramWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELEGRAMWINDOW_H
