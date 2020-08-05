#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_game.h"
#include <qlabel.h>
#include "unit.h"
#include "myLab.h"
#include "qdebug.h"
#include "hero.h"

class game : public QMainWindow
{
	Q_OBJECT

public:
	game(QWidget *parent = Q_NULLPTR);
	myLab* hero = new myLab;

	static int fps_num_ctrl;
	static int unitSize;
private:
	Ui::gameClass ui;
	void setPic(QLabel* lab, QString str);

	//��Ԫ���С����
	
	int widthNum = 20;
	int heightNum = 14;
	int width = widthNum * unitSize;
	int height = heightNum * unitSize;
	

	void log(QString str);
	void log(int i);
	QMap<QString , unit> map;

	//��ȡ���� �õ�����
	void setOption(QString key , QString value);
	void setOption(QString group , QString key , QString value);
	QVariant getOption(QString key);
	QVariant getOption(QString group , QString key);

	//init function
	void init();
	void human();

	//�����ߺ���
	void productMap();
	void fullGrassOnOption();
	void setArea();   //���������Ե�ͼƬ

private slots:
	void destination(myLab *);
};


