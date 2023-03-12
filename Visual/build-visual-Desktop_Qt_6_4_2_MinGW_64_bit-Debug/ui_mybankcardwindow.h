/********************************************************************************
** Form generated from reading UI file 'mybankcardwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYBANKCARDWINDOW_H
#define UI_MYBANKCARDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_MyBankcardWindow
{
public:
    QTableWidget *tableWidget;
    QLabel *label_Delete;
    QLabel *label_Title;
    QLabel *label_Number;
    QTextEdit *textEdit_Title;
    QTextEdit *textEdit_3;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_add;

    void setupUi(QDialog *MyBankcardWindow)
    {
        if (MyBankcardWindow->objectName().isEmpty())
            MyBankcardWindow->setObjectName("MyBankcardWindow");
        MyBankcardWindow->resize(515, 266);
        tableWidget = new QTableWidget(MyBankcardWindow);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(10, 20, 311, 192));
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        label_Delete = new QLabel(MyBankcardWindow);
        label_Delete->setObjectName("label_Delete");
        label_Delete->setGeometry(QRect(340, 30, 49, 16));
        label_Title = new QLabel(MyBankcardWindow);
        label_Title->setObjectName("label_Title");
        label_Title->setGeometry(QRect(340, 70, 49, 16));
        label_Number = new QLabel(MyBankcardWindow);
        label_Number->setObjectName("label_Number");
        label_Number->setGeometry(QRect(340, 120, 49, 16));
        textEdit_Title = new QTextEdit(MyBankcardWindow);
        textEdit_Title->setObjectName("textEdit_Title");
        textEdit_Title->setGeometry(QRect(340, 90, 151, 26));
        textEdit_3 = new QTextEdit(MyBankcardWindow);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(340, 140, 151, 26));
        pushButton_delete = new QPushButton(MyBankcardWindow);
        pushButton_delete->setObjectName("pushButton_delete");
        pushButton_delete->setGeometry(QRect(340, 180, 151, 24));
        pushButton_add = new QPushButton(MyBankcardWindow);
        pushButton_add->setObjectName("pushButton_add");
        pushButton_add->setGeometry(QRect(10, 230, 481, 24));

        retranslateUi(MyBankcardWindow);

        QMetaObject::connectSlotsByName(MyBankcardWindow);
    } // setupUi

    void retranslateUi(QDialog *MyBankcardWindow)
    {
        MyBankcardWindow->setWindowTitle(QCoreApplication::translate("MyBankcardWindow", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MyBankcardWindow", "Title", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MyBankcardWindow", "Number", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MyBankcardWindow", "Date", nullptr));
        label_Delete->setText(QCoreApplication::translate("MyBankcardWindow", "Delete", nullptr));
        label_Title->setText(QCoreApplication::translate("MyBankcardWindow", "Title:", nullptr));
        label_Number->setText(QCoreApplication::translate("MyBankcardWindow", "Number:", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("MyBankcardWindow", "delete", nullptr));
        pushButton_add->setText(QCoreApplication::translate("MyBankcardWindow", "add new Bankcard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyBankcardWindow: public Ui_MyBankcardWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYBANKCARDWINDOW_H
