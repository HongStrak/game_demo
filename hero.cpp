
#include "hero.h"
void Hero::moveRight() {
	this->x += 1;
	this->moveOn(x, y);
	//  ����lab��x��y��ֵ�������� ����ͼ���λ��    ����ʹ��Runable�Ķ��߳�
};
Hero::Hero() {
	int temp = 0;
};
void Hero::mouseReleaseEvent(QMouseEvent* e) {};