/********************************************************************************
** Form generated from reading UI file 'imageshowwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGESHOWWINDOW_H
#define UI_IMAGESHOWWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_ImageShowWindow
{
public:
    QLabel *label;

    void setupUi(QDialog *ImageShowWindow)
    {
        if (ImageShowWindow->objectName().isEmpty())
            ImageShowWindow->setObjectName("ImageShowWindow");
        ImageShowWindow->resize(512, 512);
        label = new QLabel(ImageShowWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 512, 512));

        retranslateUi(ImageShowWindow);

        QMetaObject::connectSlotsByName(ImageShowWindow);
    } // setupUi

    void retranslateUi(QDialog *ImageShowWindow)
    {
        ImageShowWindow->setWindowTitle(QCoreApplication::translate("ImageShowWindow", "Dialog", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ImageShowWindow: public Ui_ImageShowWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGESHOWWINDOW_H
