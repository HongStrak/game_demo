#pragma once
#include "qlabel.h"



class myLab :public QLabel {
	Q_OBJECT
public:
	myLab(QWidget* parent = 0);

	void setX(int x);
	void setY(int y);
	int getX();
	int getY();
	myLab *hero;
	void moveOn(int x , int y);
protected:
	virtual void mouseReleaseEvent(QMouseEvent* e);
	int x;
	int y;
signals:
	void clicked(myLab *);

private slots:
	void destination(myLab *);
};

