/********************************************************************************
** Form generated from reading UI file 'helpmewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPMEWINDOW_H
#define UI_HELPMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_HelpmeWindow
{
public:
    QLabel *label;

    void setupUi(QDialog *HelpmeWindow)
    {
        if (HelpmeWindow->objectName().isEmpty())
            HelpmeWindow->setObjectName("HelpmeWindow");
        HelpmeWindow->resize(142, 93);
        label = new QLabel(HelpmeWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 40, 101, 16));

        retranslateUi(HelpmeWindow);

        QMetaObject::connectSlotsByName(HelpmeWindow);
    } // setupUi

    void retranslateUi(QDialog *HelpmeWindow)
    {
        HelpmeWindow->setWindowTitle(QCoreApplication::translate("HelpmeWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("HelpmeWindow", "no data", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HelpmeWindow: public Ui_HelpmeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPMEWINDOW_H
