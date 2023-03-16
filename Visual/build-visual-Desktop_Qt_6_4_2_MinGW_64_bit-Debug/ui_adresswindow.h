/********************************************************************************
** Form generated from reading UI file 'adresswindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADRESSWINDOW_H
#define UI_ADRESSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_AdressWindow
{
public:
    QLabel *label_Country;
    QLabel *label_Town;
    QLabel *label_Street;
    QLabel *label_Number;
    QTextEdit *textEdit_Country;
    QTextEdit *textEdit_Town;
    QTextEdit *textEdit_Street;
    QTextEdit *textEdit_Number;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *AdressWindow)
    {
        if (AdressWindow->objectName().isEmpty())
            AdressWindow->setObjectName("AdressWindow");
        AdressWindow->resize(286, 238);
        label_Country = new QLabel(AdressWindow);
        label_Country->setObjectName("label_Country");
        label_Country->setGeometry(QRect(20, 30, 50, 16));
        label_Town = new QLabel(AdressWindow);
        label_Town->setObjectName("label_Town");
        label_Town->setGeometry(QRect(30, 60, 40, 20));
        label_Street = new QLabel(AdressWindow);
        label_Street->setObjectName("label_Street");
        label_Street->setGeometry(QRect(30, 90, 40, 20));
        label_Number = new QLabel(AdressWindow);
        label_Number->setObjectName("label_Number");
        label_Number->setGeometry(QRect(20, 120, 61, 20));
        textEdit_Country = new QTextEdit(AdressWindow);
        textEdit_Country->setObjectName("textEdit_Country");
        textEdit_Country->setGeometry(QRect(80, 28, 171, 26));
        textEdit_Town = new QTextEdit(AdressWindow);
        textEdit_Town->setObjectName("textEdit_Town");
        textEdit_Town->setGeometry(QRect(80, 60, 171, 26));
        textEdit_Street = new QTextEdit(AdressWindow);
        textEdit_Street->setObjectName("textEdit_Street");
        textEdit_Street->setGeometry(QRect(80, 90, 171, 26));
        textEdit_Number = new QTextEdit(AdressWindow);
        textEdit_Number->setObjectName("textEdit_Number");
        textEdit_Number->setGeometry(QRect(80, 120, 171, 26));
        pushButton = new QPushButton(AdressWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(28, 190, 98, 24));
        pushButton_2 = new QPushButton(AdressWindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(147, 190, 103, 24));

        retranslateUi(AdressWindow);

        QMetaObject::connectSlotsByName(AdressWindow);
    } // setupUi

    void retranslateUi(QDialog *AdressWindow)
    {
        AdressWindow->setWindowTitle(QCoreApplication::translate("AdressWindow", "Dialog", nullptr));
        label_Country->setText(QCoreApplication::translate("AdressWindow", "Country:", nullptr));
        label_Town->setText(QCoreApplication::translate("AdressWindow", "Town:", nullptr));
        label_Street->setText(QCoreApplication::translate("AdressWindow", "Street:", nullptr));
        label_Number->setText(QCoreApplication::translate("AdressWindow", "Number:", nullptr));
        pushButton->setText(QCoreApplication::translate("AdressWindow", "add", nullptr));
        pushButton_2->setText(QCoreApplication::translate("AdressWindow", "cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdressWindow: public Ui_AdressWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADRESSWINDOW_H
