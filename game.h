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

	//单元格大小设置
	
	int widthNum = 20;
	int heightNum = 14;
	int width = widthNum * unitSize;
	int height = heightNum * unitSize;
	

	void log(QString str);
	void log(int i);
	QMap<QString , unit> map;

	//获取设置 得到设置
	void setOption(QString key , QString value);
	void setOption(QString group , QString key , QString value);
	QVariant getOption(QString key);
	QVariant getOption(QString group , QString key);

	//init function
	void init();
	void human();

	//管理者函数
	void productMap();
	void fullGrassOnOption();
	void setArea();   //设置区域性的图片

private slots:
	void destination(myLab *);
};


