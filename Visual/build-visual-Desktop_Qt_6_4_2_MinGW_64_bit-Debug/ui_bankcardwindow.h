/********************************************************************************
** Form generated from reading UI file 'bankcardwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANKCARDWINDOW_H
#define UI_BANKCARDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_BankcardWindow
{
public:
    QLabel *label_Title;
    QLabel *label_Number;
    QLabel *label_Year;
    QLabel *label_Month;
    QSpinBox *spinBox_Year;
    QSpinBox *spinBox_Month;
    QTextEdit *textEdit_Title;
    QTextEdit *textEdit_Number;
    QPushButton *pushButton_add;
    QPushButton *pushButton_cancel;

    void setupUi(QDialog *BankcardWindow)
    {
        if (BankcardWindow->objectName().isEmpty())
            BankcardWindow->setObjectName("BankcardWindow");
        BankcardWindow->resize(332, 259);
        BankcardWindow->setStyleSheet(QString::fromUtf8(""));
        label_Title = new QLabel(BankcardWindow);
        label_Title->setObjectName("label_Title");
        label_Title->setGeometry(QRect(50, 40, 49, 30));
        label_Number = new QLabel(BankcardWindow);
        label_Number->setObjectName("label_Number");
        label_Number->setGeometry(QRect(50, 90, 51, 10));
        label_Year = new QLabel(BankcardWindow);
        label_Year->setObjectName("label_Year");
        label_Year->setGeometry(QRect(40, 150, 49, 16));
        label_Month = new QLabel(BankcardWindow);
        label_Month->setObjectName("label_Month");
        label_Month->setGeometry(QRect(170, 150, 49, 16));
        spinBox_Year = new QSpinBox(BankcardWindow);
        spinBox_Year->setObjectName("spinBox_Year");
        spinBox_Year->setGeometry(QRect(72, 146, 61, 24));
        spinBox_Year->setMinimum(2000);
        spinBox_Year->setMaximum(2200);
        spinBox_Month = new QSpinBox(BankcardWindow);
        spinBox_Month->setObjectName("spinBox_Month");
        spinBox_Month->setGeometry(QRect(220, 146, 61, 25));
        spinBox_Month->setMinimum(1);
        spinBox_Month->setMaximum(12);
        textEdit_Title = new QTextEdit(BankcardWindow);
        textEdit_Title->setObjectName("textEdit_Title");
        textEdit_Title->setGeometry(QRect(110, 40, 171, 30));
        textEdit_Number = new QTextEdit(BankcardWindow);
        textEdit_Number->setObjectName("textEdit_Number");
        textEdit_Number->setGeometry(QRect(110, 80, 171, 30));
        pushButton_add = new QPushButton(BankcardWindow);
        pushButton_add->setObjectName("pushButton_add");
        pushButton_add->setGeometry(QRect(30, 200, 121, 24));
        pushButton_cancel = new QPushButton(BankcardWindow);
        pushButton_cancel->setObjectName("pushButton_cancel");
        pushButton_cancel->setGeometry(QRect(170, 200, 121, 24));

        retranslateUi(BankcardWindow);

        QMetaObject::connectSlotsByName(BankcardWindow);
    } // setupUi

    void retranslateUi(QDialog *BankcardWindow)
    {
        BankcardWindow->setWindowTitle(QCoreApplication::translate("BankcardWindow", "Dialog", nullptr));
        label_Title->setText(QCoreApplication::translate("BankcardWindow", "Title:", nullptr));
        label_Number->setText(QCoreApplication::translate("BankcardWindow", "Number:", nullptr));
        label_Year->setText(QCoreApplication::translate("BankcardWindow", "Year:", nullptr));
        label_Month->setText(QCoreApplication::translate("BankcardWindow", "Month:", nullptr));
        pushButton_add->setText(QCoreApplication::translate("BankcardWindow", "add", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("BankcardWindow", "cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BankcardWindow: public Ui_BankcardWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANKCARDWINDOW_H
