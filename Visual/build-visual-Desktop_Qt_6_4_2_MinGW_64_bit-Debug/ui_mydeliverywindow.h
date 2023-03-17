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
    QTextEdit *textEdit_Titl_delete;
    QPushButton *pushButton_Delete;
    QLabel *label_3;
    QComboBox *comboBox_Type;
    QPushButton *pushButton_Add;
    QPushButton *pushButton_close;
    QLabel *label_4;
    QComboBox *comboBox_Order;
    QPushButton *pushButton_Add_2;

    void setupUi(QDialog *MyDeliveryWindow)
    {
        if (MyDeliveryWindow->objectName().isEmpty())
            MyDeliveryWindow->setObjectName("MyDeliveryWindow");
        MyDeliveryWindow->resize(596, 286);
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
        label_2->setGeometry(QRect(460, 16, 101, 20));
        textEdit_Titl_delete = new QTextEdit(MyDeliveryWindow);
        textEdit_Titl_delete->setObjectName("textEdit_Titl_delete");
        textEdit_Titl_delete->setGeometry(QRect(460, 72, 121, 27));
        pushButton_Delete = new QPushButton(MyDeliveryWindow);
        pushButton_Delete->setObjectName("pushButton_Delete");
        pushButton_Delete->setGeometry(QRect(460, 174, 121, 24));
        label_3 = new QLabel(MyDeliveryWindow);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(460, 112, 81, 12));
        comboBox_Type = new QComboBox(MyDeliveryWindow);
        comboBox_Type->addItem(QString());
        comboBox_Type->addItem(QString());
        comboBox_Type->addItem(QString());
        comboBox_Type->setObjectName("comboBox_Type");
        comboBox_Type->setGeometry(QRect(460, 132, 121, 25));
        pushButton_Add = new QPushButton(MyDeliveryWindow);
        pushButton_Add->setObjectName("pushButton_Add");
        pushButton_Add->setGeometry(QRect(410, 210, 171, 24));
        pushButton_close = new QPushButton(MyDeliveryWindow);
        pushButton_close->setObjectName("pushButton_close");
        pushButton_close->setGeometry(QRect(10, 247, 570, 24));
        label_4 = new QLabel(MyDeliveryWindow);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 215, 49, 16));
        comboBox_Order = new QComboBox(MyDeliveryWindow);
        comboBox_Order->addItem(QString());
        comboBox_Order->addItem(QString());
        comboBox_Order->setObjectName("comboBox_Order");
        comboBox_Order->setGeometry(QRect(80, 210, 211, 24));
        pushButton_Add_2 = new QPushButton(MyDeliveryWindow);
        pushButton_Add_2->setObjectName("pushButton_Add_2");
        pushButton_Add_2->setGeometry(QRect(300, 210, 101, 24));

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
        label_2->setText(QCoreApplication::translate("MyDeliveryWindow", "- - - - DELETE - - - -", nullptr));
        pushButton_Delete->setText(QCoreApplication::translate("MyDeliveryWindow", "delete", nullptr));
        label_3->setText(QCoreApplication::translate("MyDeliveryWindow", "Type Delivery:", nullptr));
        comboBox_Type->setItemText(0, QCoreApplication::translate("MyDeliveryWindow", "Ukrposhta", nullptr));
        comboBox_Type->setItemText(1, QCoreApplication::translate("MyDeliveryWindow", "Novaposhta", nullptr));
        comboBox_Type->setItemText(2, QCoreApplication::translate("MyDeliveryWindow", "Meest", nullptr));

        pushButton_Add->setText(QCoreApplication::translate("MyDeliveryWindow", "add new Delivery", nullptr));
        pushButton_close->setText(QCoreApplication::translate("MyDeliveryWindow", "close and save", nullptr));
        label_4->setText(QCoreApplication::translate("MyDeliveryWindow", "Order by:", nullptr));
        comboBox_Order->setItemText(0, QCoreApplication::translate("MyDeliveryWindow", "Title", nullptr));
        comboBox_Order->setItemText(1, QCoreApplication::translate("MyDeliveryWindow", "Adress", nullptr));

        pushButton_Add_2->setText(QCoreApplication::translate("MyDeliveryWindow", "Order", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyDeliveryWindow: public Ui_MyDeliveryWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDELIVERYWINDOW_H
