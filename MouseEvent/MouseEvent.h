#pragma once
#pragma execution_character_set("utf-8")

#include <QtWidgets/QMainWindow>
#include <qlabel.h>
#include <qstatusbar.h>
#include <QMouseEvent>

class MouseEvent : public QMainWindow
{
	Q_OBJECT

public:
	MouseEvent(QWidget *parent = Q_NULLPTR);

protected:
	void mousePressEvent(QMouseEvent *e);
	void mouseMoveEvent(QMouseEvent *e);
	void mouseReleaseEvent(QMouseEvent *e);
	void mouseDoubleClickEvent(QMouseEvent *e);
private:
	QLabel * statusLabel;
	QLabel * MousePosLabel;
};
