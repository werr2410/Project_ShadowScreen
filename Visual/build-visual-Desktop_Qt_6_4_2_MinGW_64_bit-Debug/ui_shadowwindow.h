/********************************************************************************
** Form generated from reading UI file 'shadowwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHADOWWINDOW_H
#define UI_SHADOWWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShadowWindow
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ShadowWindow)
    {
        if (ShadowWindow->objectName().isEmpty())
            ShadowWindow->setObjectName("ShadowWindow");
        ShadowWindow->resize(800, 600);
        centralwidget = new QWidget(ShadowWindow);
        centralwidget->setObjectName("centralwidget");
        ShadowWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ShadowWindow);
        menubar->setObjectName("menubar");
        ShadowWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ShadowWindow);
        statusbar->setObjectName("statusbar");
        ShadowWindow->setStatusBar(statusbar);

        retranslateUi(ShadowWindow);

        QMetaObject::connectSlotsByName(ShadowWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ShadowWindow)
    {
        ShadowWindow->setWindowTitle(QCoreApplication::translate("ShadowWindow", "ShadowWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShadowWindow: public Ui_ShadowWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHADOWWINDOW_H
