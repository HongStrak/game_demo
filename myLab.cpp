#include "myLab.h"
#include "qdebug.h"
#include "game.h"
/*
1、不知道怎么去解决runable的问题
2、wait方法不知道怎么去重启

*/


//TODO 设置lab  的位置
void myLab::moveOn(int x , int y) {
	int us = game::unitSize;
	this->move(x * us, y * us);

	if (this->x != x)setX(x);
	if(this->y != y)setY(y);
}