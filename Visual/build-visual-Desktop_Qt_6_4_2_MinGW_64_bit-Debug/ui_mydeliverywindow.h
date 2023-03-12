/********************************************************************************
** Form generated from reading UI file 'mydeliverywindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYDELIVERYWINDOW_H
#define UI_MYDELIVERYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_MyDeliveryWindow
{
public:
    QTableWidget *tableWidget;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QLabel *label_3;
    QComboBox *comboBox;
    QPushButton *pushButton_2;

    void setupUi(QDialog *MyDeliveryWindow)
    {
        if (MyDeliveryWindow->objectName().isEmpty())
            MyDeliveryWindow->setObjectName("MyDeliveryWindow");
        MyDeliveryWindow->resize(608, 264);
        tableWidget = new QTableWidget(MyDeliveryWindow);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(10, 10, 431, 191));
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        label = new QLabel(MyDeliveryWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(460, 52, 49, 12));
        label_2 = new QLabel(MyDeliveryWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(460, 16, 49, 20));
        textEdit = new QTextEdit(MyDeliveryWindow);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(460, 72, 121, 27));
        pushButton = new QPushButton(MyDeliveryWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(460, 174, 121, 24));
        label_3 = new QLabel(MyDeliveryWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(460, 112, 81, 12));
        comboBox = new QComboBox(MyDeliveryWindow);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(460, 132, 121, 20));
        pushButton_2 = new QPushButton(MyDeliveryWindow);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(20, 220, 560, 24));

        retranslateUi(MyDeliveryWindow);

        QMetaObject::connectSlotsByName(MyDeliveryWindow);
    } // setupUi

    void retranslateUi(QDialog *MyDeliveryWindow)
    {
        MyDeliveryWindow->setWindowTitle(QCoreApplication::translate("MyDeliveryWindow", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MyDeliveryWindow", "Title", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MyDeliveryWindow", "Type Delivery", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MyDeliveryWindow", "Adress", nullptr));
        label->setText(QCoreApplication::translate("MyDeliveryWindow", "Title:", nullptr));
        label_2->setText(QCoreApplication::translate("MyDeliveryWindow", "Delete:", nullptr));
        pushButton->setText(QCoreApplication::translate("MyDeliveryWindow", "delete", nullptr));
        label_3->setText(QCoreApplication::translate("MyDeliveryWindow", "Type Delivery:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MyDeliveryWindow", "add new Delivery", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyDeliveryWindow: public Ui_MyDeliveryWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDELIVERYWINDOW_H
