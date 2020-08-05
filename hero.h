#pragma once
#include "myLab.h"
class Hero : public myLab {
public:
	void moveRight();
	Hero();
	virtual void mouseReleaseEvent(QMouseEvent* e);
};