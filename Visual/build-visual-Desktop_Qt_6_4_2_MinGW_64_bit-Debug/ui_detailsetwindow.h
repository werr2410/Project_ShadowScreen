/********************************************************************************
** Form generated from reading UI file 'detailsetwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETAILSETWINDOW_H
#define UI_DETAILSETWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_DetailSetWindow
{
public:
    QLabel *label_Field0;
    QLabel *label_Field1;
    QLabel *label_Field2;
    QTextEdit *textEdit_Field0;
    QTextEdit *textEdit_Field1;
    QTextEdit *textEdit_Field2;
    QLabel *label_Picture;
    QLabel *label_Description;
    QLabel *label_Status;
    QRadioButton *radioButton_Sale;
    QPushButton *pushButton_File;
    QTextEdit *textEdit_Description;
    QTextEdit *textEdit_Status;
    QPushButton *pushButton_Save;

    void setupUi(QDialog *DetailSetWindow)
    {
        if (DetailSetWindow->objectName().isEmpty())
            DetailSetWindow->setObjectName("DetailSetWindow");
        DetailSetWindow->resize(430, 209);
        label_Field0 = new QLabel(DetailSetWindow);
        label_Field0->setObjectName("label_Field0");
        label_Field0->setGeometry(QRect(10, 20, 81, 16));
        label_Field1 = new QLabel(DetailSetWindow);
        label_Field1->setObjectName("label_Field1");
        label_Field1->setGeometry(QRect(10, 70, 81, 16));
        label_Field2 = new QLabel(DetailSetWindow);
        label_Field2->setObjectName("label_Field2");
        label_Field2->setGeometry(QRect(10, 120, 81, 16));
        textEdit_Field0 = new QTextEdit(DetailSetWindow);
        textEdit_Field0->setObjectName("textEdit_Field0");
        textEdit_Field0->setGeometry(QRect(100, 18, 104, 26));
        textEdit_Field0->setReadOnly(true);
        textEdit_Field1 = new QTextEdit(DetailSetWindow);
        textEdit_Field1->setObjectName("textEdit_Field1");
        textEdit_Field1->setGeometry(QRect(100, 65, 104, 26));
        textEdit_Field1->setReadOnly(true);
        textEdit_Field2 = new QTextEdit(DetailSetWindow);
        textEdit_Field2->setObjectName("textEdit_Field2");
        textEdit_Field2->setGeometry(QRect(100, 112, 104, 26));
        textEdit_Field2->setReadOnly(true);
        label_Picture = new QLabel(DetailSetWindow);
        label_Picture->setObjectName("label_Picture");
        label_Picture->setGeometry(QRect(250, 20, 49, 16));
        label_Description = new QLabel(DetailSetWindow);
        label_Description->setObjectName("label_Description");
        label_Description->setGeometry(QRect(230, 70, 70, 16));
        label_Status = new QLabel(DetailSetWindow);
        label_Status->setObjectName("label_Status");
        label_Status->setGeometry(QRect(260, 120, 40, 16));
        radioButton_Sale = new QRadioButton(DetailSetWindow);
        radioButton_Sale->setObjectName("radioButton_Sale");
        radioButton_Sale->setGeometry(QRect(330, 160, 51, 22));
        pushButton_File = new QPushButton(DetailSetWindow);
        pushButton_File->setObjectName("pushButton_File");
        pushButton_File->setGeometry(QRect(310, 20, 101, 23));
        textEdit_Description = new QTextEdit(DetailSetWindow);
        textEdit_Description->setObjectName("textEdit_Description");
        textEdit_Description->setGeometry(QRect(310, 60, 104, 41));
        textEdit_Status = new QTextEdit(DetailSetWindow);
        textEdit_Status->setObjectName("textEdit_Status");
        textEdit_Status->setGeometry(QRect(310, 117, 104, 26));
        pushButton_Save = new QPushButton(DetailSetWindow);
        pushButton_Save->setObjectName("pushButton_Save");
        pushButton_Save->setGeometry(QRect(10, 160, 291, 24));

        retranslateUi(DetailSetWindow);

        QMetaObject::connectSlotsByName(DetailSetWindow);
    } // setupUi

    void retranslateUi(QDialog *DetailSetWindow)
    {
        DetailSetWindow->setWindowTitle(QCoreApplication::translate("DetailSetWindow", "Dialog", nullptr));
        label_Field0->setText(QCoreApplication::translate("DetailSetWindow", "manufacturer:", nullptr));
        label_Field1->setText(QCoreApplication::translate("DetailSetWindow", "field1", nullptr));
        label_Field2->setText(QCoreApplication::translate("DetailSetWindow", "field2", nullptr));
        label_Picture->setText(QCoreApplication::translate("DetailSetWindow", "Picture:", nullptr));
        label_Description->setText(QCoreApplication::translate("DetailSetWindow", "Description:", nullptr));
        label_Status->setText(QCoreApplication::translate("DetailSetWindow", "Status:", nullptr));
        radioButton_Sale->setText(QCoreApplication::translate("DetailSetWindow", "Sale", nullptr));
        pushButton_File->setText(QCoreApplication::translate("DetailSetWindow", "File", nullptr));
        pushButton_Save->setText(QCoreApplication::translate("DetailSetWindow", "save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DetailSetWindow: public Ui_DetailSetWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAILSETWINDOW_H
