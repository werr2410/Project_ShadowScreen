/********************************************************************************
** Form generated from reading UI file 'deliverywindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELIVERYWINDOW_H
#define UI_DELIVERYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_DeliveryWindow
{
public:
    QLabel *label_Title;
    QTextEdit *textEdit_Title;
    QLabel *label_TypreDelivery;
    QComboBox *comboBox_TypeDelivery;
    QLabel *label_Adress;
    QFrame *line_between_Adress;
    QTextEdit *textEdit_Country;
    QTextEdit *textEdit_Town;
    QTextEdit *textEdit_Street;
    QTextEdit *textEdit_Number;
    QLabel *label_Country;
    QLabel *label_Town;
    QLabel *label_Street;
    QLabel *label_Number;
    QPushButton *pushButton_add;
    QPushButton *pushButton_cancel;
    QFrame *line_between_button;

    void setupUi(QDialog *DeliveryWindow)
    {
        if (DeliveryWindow->objectName().isEmpty())
            DeliveryWindow->setObjectName("DeliveryWindow");
        DeliveryWindow->resize(340, 313);
        label_Title = new QLabel(DeliveryWindow);
        label_Title->setObjectName("label_Title");
        label_Title->setGeometry(QRect(56, 30, 40, 20));
        textEdit_Title = new QTextEdit(DeliveryWindow);
        textEdit_Title->setObjectName("textEdit_Title");
        textEdit_Title->setGeometry(QRect(93, 30, 210, 26));
        label_TypreDelivery = new QLabel(DeliveryWindow);
        label_TypreDelivery->setObjectName("label_TypreDelivery");
        label_TypreDelivery->setGeometry(QRect(10, 70, 91, 16));
        comboBox_TypeDelivery = new QComboBox(DeliveryWindow);
        comboBox_TypeDelivery->setObjectName("comboBox_TypeDelivery");
        comboBox_TypeDelivery->setGeometry(QRect(94, 70, 210, 24));
        label_Adress = new QLabel(DeliveryWindow);
        label_Adress->setObjectName("label_Adress");
        label_Adress->setGeometry(QRect(170, 110, 49, 16));
        line_between_Adress = new QFrame(DeliveryWindow);
        line_between_Adress->setObjectName("line_between_Adress");
        line_between_Adress->setGeometry(QRect(-10, 130, 421, 16));
        line_between_Adress->setFrameShape(QFrame::HLine);
        line_between_Adress->setFrameShadow(QFrame::Sunken);
        textEdit_Country = new QTextEdit(DeliveryWindow);
        textEdit_Country->setObjectName("textEdit_Country");
        textEdit_Country->setGeometry(QRect(40, 160, 111, 26));
        textEdit_Town = new QTextEdit(DeliveryWindow);
        textEdit_Town->setObjectName("textEdit_Town");
        textEdit_Town->setGeometry(QRect(210, 160, 111, 26));
        textEdit_Street = new QTextEdit(DeliveryWindow);
        textEdit_Street->setObjectName("textEdit_Street");
        textEdit_Street->setGeometry(QRect(40, 220, 111, 26));
        textEdit_Number = new QTextEdit(DeliveryWindow);
        textEdit_Number->setObjectName("textEdit_Number");
        textEdit_Number->setGeometry(QRect(210, 220, 111, 26));
        label_Country = new QLabel(DeliveryWindow);
        label_Country->setObjectName("label_Country");
        label_Country->setGeometry(QRect(66, 140, 49, 16));
        label_Town = new QLabel(DeliveryWindow);
        label_Town->setObjectName("label_Town");
        label_Town->setGeometry(QRect(248, 140, 49, 16));
        label_Street = new QLabel(DeliveryWindow);
        label_Street->setObjectName("label_Street");
        label_Street->setGeometry(QRect(74, 200, 40, 16));
        label_Number = new QLabel(DeliveryWindow);
        label_Number->setObjectName("label_Number");
        label_Number->setGeometry(QRect(240, 200, 49, 16));
        pushButton_add = new QPushButton(DeliveryWindow);
        pushButton_add->setObjectName("pushButton_add");
        pushButton_add->setGeometry(QRect(40, 270, 111, 24));
        pushButton_cancel = new QPushButton(DeliveryWindow);
        pushButton_cancel->setObjectName("pushButton_cancel");
        pushButton_cancel->setGeometry(QRect(210, 270, 111, 24));
        line_between_button = new QFrame(DeliveryWindow);
        line_between_button->setObjectName("line_between_button");
        line_between_button->setGeometry(QRect(0, 250, 351, 16));
        line_between_button->setFrameShape(QFrame::HLine);
        line_between_button->setFrameShadow(QFrame::Sunken);

        retranslateUi(DeliveryWindow);

        QMetaObject::connectSlotsByName(DeliveryWindow);
    } // setupUi

    void retranslateUi(QDialog *DeliveryWindow)
    {
        DeliveryWindow->setWindowTitle(QCoreApplication::translate("DeliveryWindow", "Dialog", nullptr));
        label_Title->setText(QCoreApplication::translate("DeliveryWindow", "Title:", nullptr));
        label_TypreDelivery->setText(QCoreApplication::translate("DeliveryWindow", "Type Delivery:", nullptr));
        label_Adress->setText(QCoreApplication::translate("DeliveryWindow", "Adress:", nullptr));
        label_Country->setText(QCoreApplication::translate("DeliveryWindow", "Country", nullptr));
        label_Town->setText(QCoreApplication::translate("DeliveryWindow", "Town", nullptr));
        label_Street->setText(QCoreApplication::translate("DeliveryWindow", "Street", nullptr));
        label_Number->setText(QCoreApplication::translate("DeliveryWindow", "Number", nullptr));
        pushButton_add->setText(QCoreApplication::translate("DeliveryWindow", "add", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("DeliveryWindow", "cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeliveryWindow: public Ui_DeliveryWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELIVERYWINDOW_H
