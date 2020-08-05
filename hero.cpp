
#include "hero.h"
void Hero::moveRight() {
	this->x += 1;
	this->moveOn(x, y);
	//  根据lab的x，y的值进行设置 任务图标的位置    建议使用Runable的多线程
};
Hero::Hero() {
	int temp = 0;
};
void Hero::mouseReleaseEvent(QMouseEvent* e) {};