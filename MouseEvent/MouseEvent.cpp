#include "MouseEvent.h"

MouseEvent::MouseEvent(QWidget *parent)
	: QMainWindow(parent)
{
	setWindowTitle(tr("����¼�"));
	statusLabel = new QLabel;
	statusLabel->setText(tr("��ǰλ�ã�"));
	statusLabel->setFixedWidth(100);
	MousePosLabel = new QLabel;
	MousePosLabel->setText(tr(""));
	MousePosLabel->setFixedWidth(100);
	//��QMainWindow��״̬������ӿؼ�
	statusBar()->addPermanentWidget(statusLabel);
	statusBar()->addPermanentWidget(MousePosLabel);
	this->setMouseTracking(true);
	resize(400, 200);
}

void MouseEvent::mousePressEvent(QMouseEvent *e)
{
	QString str = "(" + QString::number(e->x()) + "," + QString::number(e->y()) + ")";
	if (e->button() == Qt::LeftButton)
	{
		statusBar()->showMessage(tr("�����") + str);
	}
	else if (e->button() == Qt::RightButton)
	{
		statusBar()->showMessage(tr("�Ҽ���") + str);
	}
	else if (e->button() == Qt::MidButton)
	{
		statusBar()->showMessage(tr("�м���") + str);
	}
}

void MouseEvent::mouseMoveEvent(QMouseEvent *e)
{
	MousePosLabel->setText("(" + QString::number(e->x()) + ", " + QString::number(e->y()) + ")");
}

void MouseEvent::mouseReleaseEvent(QMouseEvent *e)
{
	QString str = "(" + QString::number(e->x()) + "," + QString::number(e->y()) + ")";
	statusBar()->showMessage(tr("�ͷ��ڣ�") + str, 3000);
}

void MouseEvent::mouseDoubleClickEvent(QMouseEvent *e) {}