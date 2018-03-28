/********************************************************************************
** Form generated from reading UI file 'KeyEvent.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYEVENT_H
#define UI_KEYEVENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KeyEventClass
{
public:

    void setupUi(QWidget *KeyEventClass)
    {
        if (KeyEventClass->objectName().isEmpty())
            KeyEventClass->setObjectName(QStringLiteral("KeyEventClass"));
        KeyEventClass->resize(600, 400);

        retranslateUi(KeyEventClass);

        QMetaObject::connectSlotsByName(KeyEventClass);
    } // setupUi

    void retranslateUi(QWidget *KeyEventClass)
    {
        KeyEventClass->setWindowTitle(QApplication::translate("KeyEventClass", "KeyEvent", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class KeyEventClass: public Ui_KeyEventClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYEVENT_H
