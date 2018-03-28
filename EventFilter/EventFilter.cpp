#include "EventFilter.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QMouseEvent>
#include <QMatrix>

EventFilter::EventFilter(QWidget *parent, Qt::WindowFlags f)
	: QDialog(parent, f)
{
	setWindowTitle(tr("�¼�����"));

	label1 = new QLabel;
	Image1.load("./image/1.png");
	label1->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
	label1->setPixmap(QPixmap::fromImage(Image1));

	label2 = new QLabel;
	Image2.load("./image/2.png");
	label2->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
	label2->setPixmap(QPixmap::fromImage(Image2));

	label3 = new QLabel;
	Image3.load("./image/3.png");
	label3->setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
	label3->setPixmap(QPixmap::fromImage(Image3));

	stateLabel = new QLabel(tr("��갴�±�־"));
	stateLabel->setAlignment(Qt::AlignHCenter);
	QHBoxLayout *layout = new QHBoxLayout;
	layout->addWidget(label1);
	layout->addWidget(label2);
	layout->addWidget(label3);

	QVBoxLayout *mainLayout = new QVBoxLayout(this);
	mainLayout->addLayout(layout);
	mainLayout->addWidget(stateLabel);

	//Ϊÿ��ͼƬ��װ�¼�����ȥ��ָ����������Ϊ�����¼��Ķ���
	label1->installEventFilter(this);
	label2->installEventFilter(this);
	label3->installEventFilter(this);
}

bool EventFilter::eventFilter(QObject *watched, QEvent *event)
{
	if (watched == label1)	//�����жϵ�ǰ�����¼��Ķ���
	{
		if (event->type() == QEvent::MouseButtonPress)	//�жϷ������¼�����
		{
			QMouseEvent *mouseEvent = (QMouseEvent *)event;
			if (mouseEvent->buttons()&Qt::LeftButton)
			{
				stateLabel->setText(tr("����������ͼƬ"));
			}
			else if (mouseEvent->buttons()&Qt::MidButton)
			{
				stateLabel->setText(tr("�м��������ͼƬ"));
			}
			else if (mouseEvent->buttons()&Qt::RightButton)
			{
				stateLabel->setText(tr("�Ҽ��������ͼƬ"));
			}

			QMatrix matrix;
			matrix.scale(1.8, 1.8);
			QImage tmpImg = Image1.transformed(matrix);
			label1->setPixmap(QPixmap::fromImage(tmpImg));	//��ʾ�Ŵ��ͼƬ
		}
		if (event->type() == QEvent::MouseButtonRelease)
		{
			stateLabel->setText(tr("����ͷ����ͼƬ"));
			label1->setPixmap(QPixmap::fromImage(Image1));	//����ɵ�֮��ָ�ԭ����ͼƬ
		}
	}
	else if (watched == label2)
	{
		if (event->type() == QEvent::MouseButtonPress)
		{
			QMouseEvent *mouseEvent = (QMouseEvent *)event;
			if (mouseEvent->buttons()&Qt::LeftButton)
			{
				stateLabel->setText(tr("��������м�ͼƬ"));
			}
			else if (mouseEvent->buttons()&Qt::MidButton)
			{
				stateLabel->setText(tr("�м������м�ͼƬ"));
			}
			else if (mouseEvent->buttons()&Qt::RightButton)
			{
				stateLabel->setText(tr("�Ҽ������м�ͼƬ"));
			}

			QMatrix matrix;
			matrix.scale(1.8, 1.8);
			QImage tmpImg = Image2.transformed(matrix);
			label2->setPixmap(QPixmap::fromImage(tmpImg));
		}
		if (event->type() == QEvent::MouseButtonRelease)
		{
			stateLabel->setText(tr("����ͷ��м�ͼƬ"));
			label2->setPixmap(QPixmap::fromImage(Image2));
		}
	}
	else if (watched == label3)
	{
		if (event->type() == QEvent::MouseButtonPress)
		{
			QMouseEvent *mouseEvent = (QMouseEvent *)event;
			if (mouseEvent->buttons()&Qt::LeftButton)
			{
				stateLabel->setText(tr("��������ұ�ͼƬ"));
			}
			else if (mouseEvent->buttons()&Qt::MidButton)
			{
				stateLabel->setText(tr("�м������ұ�ͼƬ"));
			}
			else if (mouseEvent->buttons()&Qt::RightButton)
			{
				stateLabel->setText(tr("�Ҽ������ұ�ͼƬ"));
			}

			QMatrix matrix;
			matrix.scale(1.8, 1.8);
			QImage tmpImg = Image3.transformed(matrix);
			label3->setPixmap(QPixmap::fromImage(tmpImg));
		}
		if (event->type() == QEvent::MouseButtonRelease)
		{
			stateLabel->setText(tr("����ͷ��ұ�ͼƬ"));
			label3->setPixmap(QPixmap::fromImage(Image3));
		}
	}
	return QDialog::eventFilter(watched, event);		//���¼������ϲ�Ի���
}
