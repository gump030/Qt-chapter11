#pragma once

#include <QtWidgets/QWidget>
#include "ui_MouseEvent.h"

class MouseEvent : public QWidget
{
	Q_OBJECT

public:
	MouseEvent(QWidget *parent = Q_NULLPTR);

private:
	Ui::MouseEventClass ui;
};
