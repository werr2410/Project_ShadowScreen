/********************************************************************************
** Form generated from reading UI file 'reviewwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REVIEWWINDOW_H
#define UI_REVIEWWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_ReviewWindow
{
public:
    QLabel *label_Title;
    QLabel *label_Description;
    QTextEdit *textEdit_Title;
    QTextEdit *textEdit_2;
    QLabel *label_Mark;
    QSpinBox *spinBox_mark;
    QPushButton *pushButton_add;
    QPushButton *pushButton_cancel;
    QLabel *label_Image;

    void setupUi(QDialog *ReviewWindow)
    {
        if (ReviewWindow->objectName().isEmpty())
            ReviewWindow->setObjectName("ReviewWindow");
        ReviewWindow->resize(310, 300);
        label_Title = new QLabel(ReviewWindow);
        label_Title->setObjectName("label_Title");
        label_Title->setGeometry(QRect(31, 21, 22, 16));
        label_Description = new QLabel(ReviewWindow);
        label_Description->setObjectName("label_Description");
        label_Description->setGeometry(QRect(31, 81, 63, 16));
        textEdit_Title = new QTextEdit(ReviewWindow);
        textEdit_Title->setObjectName("textEdit_Title");
        textEdit_Title->setGeometry(QRect(31, 43, 256, 27));
        textEdit_2 = new QTextEdit(ReviewWindow);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(31, 103, 256, 87));
        label_Mark = new QLabel(ReviewWindow);
        label_Mark->setObjectName("label_Mark");
        label_Mark->setGeometry(QRect(30, 200, 40, 30));
        spinBox_mark = new QSpinBox(ReviewWindow);
        spinBox_mark->setObjectName("spinBox_mark");
        spinBox_mark->setGeometry(QRect(70, 200, 51, 30));
        spinBox_mark->setMinimum(1);
        spinBox_mark->setMaximum(10);
        pushButton_add = new QPushButton(ReviewWindow);
        pushButton_add->setObjectName("pushButton_add");
        pushButton_add->setGeometry(QRect(30, 260, 110, 24));
        pushButton_cancel = new QPushButton(ReviewWindow);
        pushButton_cancel->setObjectName("pushButton_cancel");
        pushButton_cancel->setGeometry(QRect(160, 260, 120, 24));
        label_Image = new QLabel(ReviewWindow);
        label_Image->setObjectName("label_Image");
        label_Image->setGeometry(QRect(180, 210, 71, 31));

        retranslateUi(ReviewWindow);

        QMetaObject::connectSlotsByName(ReviewWindow);
    } // setupUi

    void retranslateUi(QDialog *ReviewWindow)
    {
        ReviewWindow->setWindowTitle(QCoreApplication::translate("ReviewWindow", "Dialog", nullptr));
        label_Title->setText(QCoreApplication::translate("ReviewWindow", "Title", nullptr));
        label_Description->setText(QCoreApplication::translate("ReviewWindow", "Description:", nullptr));
        label_Mark->setText(QCoreApplication::translate("ReviewWindow", "Mark:", nullptr));
        pushButton_add->setText(QCoreApplication::translate("ReviewWindow", "add", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("ReviewWindow", "cancel", nullptr));
        label_Image->setText(QCoreApplication::translate("ReviewWindow", "image", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReviewWindow: public Ui_ReviewWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REVIEWWINDOW_H
