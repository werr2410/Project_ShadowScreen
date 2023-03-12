/********************************************************************************
** Form generated from reading UI file 'myreviewwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYREVIEWWINDOW_H
#define UI_MYREVIEWWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MyReviewWindow
{
public:
    QLabel *label_count;
    QLabel *label_mark;
    QLabel *label_count_set;
    QLabel *label_mark_set;
    QPushButton *pushButton_close;

    void setupUi(QDialog *MyReviewWindow)
    {
        if (MyReviewWindow->objectName().isEmpty())
            MyReviewWindow->setObjectName("MyReviewWindow");
        MyReviewWindow->resize(139, 132);
        label_count = new QLabel(MyReviewWindow);
        label_count->setObjectName("label_count");
        label_count->setGeometry(QRect(20, 20, 49, 16));
        label_mark = new QLabel(MyReviewWindow);
        label_mark->setObjectName("label_mark");
        label_mark->setGeometry(QRect(20, 60, 49, 16));
        label_count_set = new QLabel(MyReviewWindow);
        label_count_set->setObjectName("label_count_set");
        label_count_set->setGeometry(QRect(70, 20, 49, 16));
        label_mark_set = new QLabel(MyReviewWindow);
        label_mark_set->setObjectName("label_mark_set");
        label_mark_set->setGeometry(QRect(70, 60, 49, 16));
        pushButton_close = new QPushButton(MyReviewWindow);
        pushButton_close->setObjectName("pushButton_close");
        pushButton_close->setGeometry(QRect(10, 90, 111, 24));

        retranslateUi(MyReviewWindow);

        QMetaObject::connectSlotsByName(MyReviewWindow);
    } // setupUi

    void retranslateUi(QDialog *MyReviewWindow)
    {
        MyReviewWindow->setWindowTitle(QCoreApplication::translate("MyReviewWindow", "Dialog", nullptr));
        label_count->setText(QCoreApplication::translate("MyReviewWindow", "Count:", nullptr));
        label_mark->setText(QCoreApplication::translate("MyReviewWindow", "Mark:", nullptr));
        label_count_set->setText(QCoreApplication::translate("MyReviewWindow", "count", nullptr));
        label_mark_set->setText(QCoreApplication::translate("MyReviewWindow", "Count:", nullptr));
        pushButton_close->setText(QCoreApplication::translate("MyReviewWindow", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyReviewWindow: public Ui_MyReviewWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYREVIEWWINDOW_H
