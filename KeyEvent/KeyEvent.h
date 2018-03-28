#pragma once
#pragma execution_character_set("utf-8")

#include <QtWidgets/QWidget>
#include <QKeyEvent>
#include <QPaintEvent>

class KeyEvent : public QWidget
{
	Q_OBJECT

public:
	KeyEvent(QWidget *parent = 0);
	~KeyEvent();
	void drawPix();
	void keyPressEvent(QKeyEvent *);
	void paintEvent(QPaintEvent *);
private:
	QPixmap * pix;
	QImage image;
	int startX;
	int startY;
	int width;
	int height;
	int step;
};