#include "myLab.h"
#include "qdebug.h"
#include "game.h"
/*
1����֪����ôȥ���runable������
2��wait������֪����ôȥ����

*/


//TODO ����lab  ��λ��
void myLab::moveOn(int x , int y) {
	int us = game::unitSize;
	this->move(x * us, y * us);

	if (this->x != x)setX(x);
	if(this->y != y)setY(y);
}