#include "game.h"
//#include "myLab.h"
#include "ui_game.h"

void game::init() {
	ui.setupUi(this);

	//����mainlab�е�����
	this->setFixedSize(width, height);
	ui.mainLab->setText("");
	ui.mainLab->setFixedSize(this->width, this->height);
	ui.mainLab->move(0, 0);
}