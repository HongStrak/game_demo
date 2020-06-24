#pragma  once


#include "qstring.h"

class unit
{
public:
	unit();
	~unit();

	//get and set
	QString getPosition();
	void setPosition(QString str);
	QString getImage();
	void setImage(QString str);
	bool isEnWalk();
	void setWalking(bool temp);

private:
	QString position;
	QString image;
	bool isWalk = true;
};



