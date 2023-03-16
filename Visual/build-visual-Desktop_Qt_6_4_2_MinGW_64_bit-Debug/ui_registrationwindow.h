/********************************************************************************
** Form generated from reading UI file 'registrationwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATIONWINDOW_H
#define UI_REGISTRATIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_RegistrationWindow
{
public:
    QLabel *label_Login_Username;
    QLabel *label_Login_Password;
    QTextEdit *textEdit_login_username;
    QTextEdit *textEdit_login_password;
    QFrame *line_between;
    QPushButton *pushButton_do_Login;
    QTextEdit *textEdit_reg_username;
    QLabel *label_Reg_Username;
    QRadioButton *radioButton_Withoutusername;
    QPushButton *pushButton_do_Registration;
    QTextEdit *textEdit_reg_password;
    QLabel *label_Reg_Password;
    QRadioButton *radioButton_withoutpassword;
    QRadioButton *radioButton_rememberme;
    QFrame *line_hozi;
    QLabel *label_LogIn;
    QLabel *label_Registration;

    void setupUi(QDialog *RegistrationWindow)
    {
        if (RegistrationWindow->objectName().isEmpty())
            RegistrationWindow->setObjectName("RegistrationWindow");
        RegistrationWindow->resize(466, 207);
        label_Login_Username = new QLabel(RegistrationWindow);
        label_Login_Username->setObjectName("label_Login_Username");
        label_Login_Username->setGeometry(QRect(10, 58, 62, 20));
        label_Login_Password = new QLabel(RegistrationWindow);
        label_Login_Password->setObjectName("label_Login_Password");
        label_Login_Password->setGeometry(QRect(10, 98, 62, 20));
        textEdit_login_username = new QTextEdit(RegistrationWindow);
        textEdit_login_username->setObjectName("textEdit_login_username");
        textEdit_login_username->setGeometry(QRect(80, 58, 122, 26));
        textEdit_login_password = new QTextEdit(RegistrationWindow);
        textEdit_login_password->setObjectName("textEdit_login_password");
        textEdit_login_password->setGeometry(QRect(80, 98, 122, 26));
        line_between = new QFrame(RegistrationWindow);
        line_between->setObjectName("line_between");
        line_between->setGeometry(QRect(210, 0, 20, 321));
        line_between->setFrameShape(QFrame::VLine);
        line_between->setFrameShadow(QFrame::Sunken);
        pushButton_do_Login = new QPushButton(RegistrationWindow);
        pushButton_do_Login->setObjectName("pushButton_do_Login");
        pushButton_do_Login->setGeometry(QRect(10, 168, 191, 24));
        textEdit_reg_username = new QTextEdit(RegistrationWindow);
        textEdit_reg_username->setObjectName("textEdit_reg_username");
        textEdit_reg_username->setGeometry(QRect(300, 52, 151, 26));
        label_Reg_Username = new QLabel(RegistrationWindow);
        label_Reg_Username->setObjectName("label_Reg_Username");
        label_Reg_Username->setGeometry(QRect(230, 58, 61, 10));
        radioButton_Withoutusername = new QRadioButton(RegistrationWindow);
        radioButton_Withoutusername->setObjectName("radioButton_Withoutusername");
        radioButton_Withoutusername->setGeometry(QRect(300, 81, 150, 22));
        pushButton_do_Registration = new QPushButton(RegistrationWindow);
        pushButton_do_Registration->setObjectName("pushButton_do_Registration");
        pushButton_do_Registration->setGeometry(QRect(230, 168, 231, 24));
        textEdit_reg_password = new QTextEdit(RegistrationWindow);
        textEdit_reg_password->setObjectName("textEdit_reg_password");
        textEdit_reg_password->setGeometry(QRect(300, 111, 151, 26));
        label_Reg_Password = new QLabel(RegistrationWindow);
        label_Reg_Password->setObjectName("label_Reg_Password");
        label_Reg_Password->setGeometry(QRect(230, 118, 61, 10));
        radioButton_withoutpassword = new QRadioButton(RegistrationWindow);
        radioButton_withoutpassword->setObjectName("radioButton_withoutpassword");
        radioButton_withoutpassword->setGeometry(QRect(302, 140, 150, 22));
        radioButton_rememberme = new QRadioButton(RegistrationWindow);
        radioButton_rememberme->setObjectName("radioButton_rememberme");
        radioButton_rememberme->setGeometry(QRect(80, 130, 110, 22));
        line_hozi = new QFrame(RegistrationWindow);
        line_hozi->setObjectName("line_hozi");
        line_hozi->setGeometry(QRect(0, 30, 471, 20));
        line_hozi->setFrameShape(QFrame::HLine);
        line_hozi->setFrameShadow(QFrame::Sunken);
        label_LogIn = new QLabel(RegistrationWindow);
        label_LogIn->setObjectName("label_LogIn");
        label_LogIn->setGeometry(QRect(90, 10, 60, 16));
        label_Registration = new QLabel(RegistrationWindow);
        label_Registration->setObjectName("label_Registration");
        label_Registration->setGeometry(QRect(310, 10, 81, 16));

        retranslateUi(RegistrationWindow);

        QMetaObject::connectSlotsByName(RegistrationWindow);
    } // setupUi

    void retranslateUi(QDialog *RegistrationWindow)
    {
        RegistrationWindow->setWindowTitle(QCoreApplication::translate("RegistrationWindow", "Dialog", nullptr));
        label_Login_Username->setText(QCoreApplication::translate("RegistrationWindow", "Username:", nullptr));
        label_Login_Password->setText(QCoreApplication::translate("RegistrationWindow", "Password:", nullptr));
        pushButton_do_Login->setText(QCoreApplication::translate("RegistrationWindow", "do", nullptr));
        label_Reg_Username->setText(QCoreApplication::translate("RegistrationWindow", "Username:", nullptr));
        radioButton_Withoutusername->setText(QCoreApplication::translate("RegistrationWindow", "Without username", nullptr));
        pushButton_do_Registration->setText(QCoreApplication::translate("RegistrationWindow", "do", nullptr));
        label_Reg_Password->setText(QCoreApplication::translate("RegistrationWindow", "Password:", nullptr));
        radioButton_withoutpassword->setText(QCoreApplication::translate("RegistrationWindow", "Without password", nullptr));
        radioButton_rememberme->setText(QCoreApplication::translate("RegistrationWindow", "Remember me", nullptr));
        label_LogIn->setText(QCoreApplication::translate("RegistrationWindow", "Log  in", nullptr));
        label_Registration->setText(QCoreApplication::translate("RegistrationWindow", "Registration", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistrationWindow: public Ui_RegistrationWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATIONWINDOW_H
