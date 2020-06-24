#include "unit.h"
#include "myLab.h"

QString unit::getImage() {
	return this->image;
}

QString unit::getPosition() {
	return this->position;
}

void unit::setImage(QString str) {
	this->image = str;
}

void unit::setPosition(QString str) {
	this->position = str;
}

void unit::setWalking(bool temp) {
	this->isWalk = temp;
}

bool unit::isEnWalk() {
	return this->isWalk;
}

unit::unit()
{
}

unit::~unit()
{
}

//todo 设置lab中的属性
void myLab::setX(int x) {
	this->x = x;
}
void myLab::setY(int y) {
	this->y = y;
}
int myLab::getX() {
	return this->x;
}
int myLab::getY() {
	return this->y;
}