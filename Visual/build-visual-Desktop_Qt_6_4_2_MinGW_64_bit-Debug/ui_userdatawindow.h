/********************************************************************************
** Form generated from reading UI file 'userdatawindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERDATAWINDOW_H
#define UI_USERDATAWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_UserDataWindow
{
public:
    QLabel *label_Name;
    QLabel *label_Surname;
    QLabel *label_Middlename;
    QTextEdit *textEdit_Name;
    QTextEdit *textEdit_Surname;
    QTextEdit *textEdit_Middlename;
    QFrame *line_between1;
    QLabel *label_Password;
    QLabel *label_Username;
    QTextEdit *textEdit_Username;
    QTextEdit *textEdit_Password;
    QLabel *label_Email;
    QTextEdit *textEdit_Email;
    QFrame *line_bewwet2;
    QLabel *label_Birthday;
    QDateEdit *dateEdit;
    QLabel *label_Hashcode;
    QLabel *label_hashcode_set;
    QPushButton *pushButton_Save;
    QPushButton *pushButton_Cancel;

    void setupUi(QDialog *UserDataWindow)
    {
        if (UserDataWindow->objectName().isEmpty())
            UserDataWindow->setObjectName("UserDataWindow");
        UserDataWindow->resize(468, 321);
        label_Name = new QLabel(UserDataWindow);
        label_Name->setObjectName("label_Name");
        label_Name->setGeometry(QRect(50, 20, 49, 16));
        label_Surname = new QLabel(UserDataWindow);
        label_Surname->setObjectName("label_Surname");
        label_Surname->setGeometry(QRect(186, 20, 49, 16));
        label_Middlename = new QLabel(UserDataWindow);
        label_Middlename->setObjectName("label_Middlename");
        label_Middlename->setGeometry(QRect(320, 20, 71, 20));
        textEdit_Name = new QTextEdit(UserDataWindow);
        textEdit_Name->setObjectName("textEdit_Name");
        textEdit_Name->setGeometry(QRect(20, 50, 111, 26));
        textEdit_Surname = new QTextEdit(UserDataWindow);
        textEdit_Surname->setObjectName("textEdit_Surname");
        textEdit_Surname->setGeometry(QRect(160, 50, 111, 26));
        textEdit_Middlename = new QTextEdit(UserDataWindow);
        textEdit_Middlename->setObjectName("textEdit_Middlename");
        textEdit_Middlename->setGeometry(QRect(300, 50, 130, 26));
        line_between1 = new QFrame(UserDataWindow);
        line_between1->setObjectName("line_between1");
        line_between1->setGeometry(QRect(-10, 90, 481, 16));
        line_between1->setFrameShape(QFrame::HLine);
        line_between1->setFrameShadow(QFrame::Sunken);
        label_Password = new QLabel(UserDataWindow);
        label_Password->setObjectName("label_Password");
        label_Password->setGeometry(QRect(40, 120, 71, 16));
        label_Username = new QLabel(UserDataWindow);
        label_Username->setObjectName("label_Username");
        label_Username->setGeometry(QRect(180, 119, 71, 16));
        textEdit_Username = new QTextEdit(UserDataWindow);
        textEdit_Username->setObjectName("textEdit_Username");
        textEdit_Username->setGeometry(QRect(150, 140, 113, 26));
        textEdit_Password = new QTextEdit(UserDataWindow);
        textEdit_Password->setObjectName("textEdit_Password");
        textEdit_Password->setGeometry(QRect(20, 140, 114, 26));
        label_Email = new QLabel(UserDataWindow);
        label_Email->setObjectName("label_Email");
        label_Email->setGeometry(QRect(345, 120, 49, 16));
        textEdit_Email = new QTextEdit(UserDataWindow);
        textEdit_Email->setObjectName("textEdit_Email");
        textEdit_Email->setGeometry(QRect(280, 140, 171, 26));
        line_bewwet2 = new QFrame(UserDataWindow);
        line_bewwet2->setObjectName("line_bewwet2");
        line_bewwet2->setGeometry(QRect(-10, 190, 501, 16));
        line_bewwet2->setFrameShape(QFrame::HLine);
        line_bewwet2->setFrameShadow(QFrame::Sunken);
        label_Birthday = new QLabel(UserDataWindow);
        label_Birthday->setObjectName("label_Birthday");
        label_Birthday->setGeometry(QRect(30, 220, 49, 16));
        dateEdit = new QDateEdit(UserDataWindow);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(90, 216, 110, 25));
        label_Hashcode = new QLabel(UserDataWindow);
        label_Hashcode->setObjectName("label_Hashcode");
        label_Hashcode->setGeometry(QRect(240, 220, 71, 16));
        label_hashcode_set = new QLabel(UserDataWindow);
        label_hashcode_set->setObjectName("label_hashcode_set");
        label_hashcode_set->setGeometry(QRect(320, 220, 61, 16));
        pushButton_Save = new QPushButton(UserDataWindow);
        pushButton_Save->setObjectName("pushButton_Save");
        pushButton_Save->setGeometry(QRect(20, 270, 191, 24));
        pushButton_Cancel = new QPushButton(UserDataWindow);
        pushButton_Cancel->setObjectName("pushButton_Cancel");
        pushButton_Cancel->setGeometry(QRect(250, 270, 201, 24));

        retranslateUi(UserDataWindow);

        QMetaObject::connectSlotsByName(UserDataWindow);
    } // setupUi

    void retranslateUi(QDialog *UserDataWindow)
    {
        UserDataWindow->setWindowTitle(QCoreApplication::translate("UserDataWindow", "Dialog", nullptr));
        label_Name->setText(QCoreApplication::translate("UserDataWindow", "Name", nullptr));
        label_Surname->setText(QCoreApplication::translate("UserDataWindow", "Surname", nullptr));
        label_Middlename->setText(QCoreApplication::translate("UserDataWindow", "Middlename", nullptr));
        label_Password->setText(QCoreApplication::translate("UserDataWindow", "Password", nullptr));
        label_Username->setText(QCoreApplication::translate("UserDataWindow", "Username", nullptr));
        label_Email->setText(QCoreApplication::translate("UserDataWindow", "Email", nullptr));
        label_Birthday->setText(QCoreApplication::translate("UserDataWindow", "Birrhday:", nullptr));
        label_Hashcode->setText(QCoreApplication::translate("UserDataWindow", "Hashcode:", nullptr));
        label_hashcode_set->setText(QCoreApplication::translate("UserDataWindow", "hashcode", nullptr));
        pushButton_Save->setText(QCoreApplication::translate("UserDataWindow", "Save", nullptr));
        pushButton_Cancel->setText(QCoreApplication::translate("UserDataWindow", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserDataWindow: public Ui_UserDataWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERDATAWINDOW_H
