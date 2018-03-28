/********************************************************************************
** Form generated from reading UI file 'EventFilter.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTFILTER_H
#define UI_EVENTFILTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_EventFilterClass
{
public:

    void setupUi(QDialog *EventFilterClass)
    {
        if (EventFilterClass->objectName().isEmpty())
            EventFilterClass->setObjectName(QStringLiteral("EventFilterClass"));
        EventFilterClass->resize(600, 400);

        retranslateUi(EventFilterClass);

        QMetaObject::connectSlotsByName(EventFilterClass);
    } // setupUi

    void retranslateUi(QDialog *EventFilterClass)
    {
        EventFilterClass->setWindowTitle(QApplication::translate("EventFilterClass", "EventFilter", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EventFilterClass: public Ui_EventFilterClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTFILTER_H
