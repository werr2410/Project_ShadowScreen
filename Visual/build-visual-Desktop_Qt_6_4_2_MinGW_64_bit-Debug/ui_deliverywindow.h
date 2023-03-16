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
    QPushButton *pushButton_add;
    QPushButton *pushButton_cancel;
    QFrame *line_between_button;
    QPushButton *pushButton_adress;

    void setupUi(QDialog *DeliveryWindow)
    {
        if (DeliveryWindow->objectName().isEmpty())
            DeliveryWindow->setObjectName("DeliveryWindow");
        DeliveryWindow->resize(340, 252);
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
        comboBox_TypeDelivery->addItem(QString());
        comboBox_TypeDelivery->addItem(QString());
        comboBox_TypeDelivery->addItem(QString());
        comboBox_TypeDelivery->setObjectName("comboBox_TypeDelivery");
        comboBox_TypeDelivery->setGeometry(QRect(94, 70, 210, 24));
        label_Adress = new QLabel(DeliveryWindow);
        label_Adress->setObjectName("label_Adress");
        label_Adress->setGeometry(QRect(130, 110, 60, 30));
        line_between_Adress = new QFrame(DeliveryWindow);
        line_between_Adress->setObjectName("line_between_Adress");
        line_between_Adress->setGeometry(QRect(-10, 130, 421, 16));
        line_between_Adress->setFrameShape(QFrame::HLine);
        line_between_Adress->setFrameShadow(QFrame::Sunken);
        pushButton_add = new QPushButton(DeliveryWindow);
        pushButton_add->setObjectName("pushButton_add");
        pushButton_add->setGeometry(QRect(20, 210, 111, 24));
        pushButton_cancel = new QPushButton(DeliveryWindow);
        pushButton_cancel->setObjectName("pushButton_cancel");
        pushButton_cancel->setGeometry(QRect(210, 210, 111, 24));
        line_between_button = new QFrame(DeliveryWindow);
        line_between_button->setObjectName("line_between_button");
        line_between_button->setGeometry(QRect(0, 190, 351, 16));
        line_between_button->setFrameShape(QFrame::HLine);
        line_between_button->setFrameShadow(QFrame::Sunken);
        pushButton_adress = new QPushButton(DeliveryWindow);
        pushButton_adress->setObjectName("pushButton_adress");
        pushButton_adress->setGeometry(QRect(23, 155, 290, 27));

        retranslateUi(DeliveryWindow);

        QMetaObject::connectSlotsByName(DeliveryWindow);
    } // setupUi

    void retranslateUi(QDialog *DeliveryWindow)
    {
        DeliveryWindow->setWindowTitle(QCoreApplication::translate("DeliveryWindow", "Dialog", nullptr));
        label_Title->setText(QCoreApplication::translate("DeliveryWindow", "Title:", nullptr));
        label_TypreDelivery->setText(QCoreApplication::translate("DeliveryWindow", "Type Delivery:", nullptr));
        comboBox_TypeDelivery->setItemText(0, QCoreApplication::translate("DeliveryWindow", "Ukrposhta", nullptr));
        comboBox_TypeDelivery->setItemText(1, QCoreApplication::translate("DeliveryWindow", "Novaposhta", nullptr));
        comboBox_TypeDelivery->setItemText(2, QCoreApplication::translate("DeliveryWindow", "Meest", nullptr));

        label_Adress->setText(QCoreApplication::translate("DeliveryWindow", "Adress:", nullptr));
        pushButton_add->setText(QCoreApplication::translate("DeliveryWindow", "add", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("DeliveryWindow", "cancel", nullptr));
        pushButton_adress->setText(QCoreApplication::translate("DeliveryWindow", "insert / show", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeliveryWindow: public Ui_DeliveryWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELIVERYWINDOW_H
