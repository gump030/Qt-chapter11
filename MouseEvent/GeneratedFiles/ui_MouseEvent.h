/********************************************************************************
** Form generated from reading UI file 'MouseEvent.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOUSEEVENT_H
#define UI_MOUSEEVENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MouseEventClass
{
public:

    void setupUi(QWidget *MouseEventClass)
    {
        if (MouseEventClass->objectName().isEmpty())
            MouseEventClass->setObjectName(QStringLiteral("MouseEventClass"));
        MouseEventClass->resize(600, 400);

        retranslateUi(MouseEventClass);

        QMetaObject::connectSlotsByName(MouseEventClass);
    } // setupUi

    void retranslateUi(QWidget *MouseEventClass)
    {
        MouseEventClass->setWindowTitle(QApplication::translate("MouseEventClass", "MouseEvent", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MouseEventClass: public Ui_MouseEventClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOUSEEVENT_H
