#include "game.h"
#include "ui_game.h"
#include <qlabel.h>

game::game(QWidget *parent)
	: QMainWindow(parent)
{
	
	init();
	//ui.setupUi(this);

	////设置mainlab中的属性
	//this->setFixedSize(width, height);
	//ui.mainLab->setText("");
	//ui.mainLab->setFixedSize(this->width, this->height);
	//ui.mainLab->move(0, 0);

	//初始化每一格
	myLab* temp;
	for (int i = 0; i < widthNum; i++)
	{
		for (int j = 0; j < heightNum; j++) {
			myLab *lab = new myLab;
			lab->setX(i);
			lab->setY(j);
			lab->move(i * unitSize, j * unitSize);
			lab->setFixedSize(unitSize, unitSize);
			lab->setParent(ui.mainLab);
			lab->hero = hero;
			temp = hero;
			connect(lab, SIGNAL(clicked(myLab*)), lab, SLOT(destination(myLab*)));
			int temp = qrand() % 10;
			if (temp < 5 )
			{
				setPic(lab, ":/back/grass2");
			}
			else
			{
				setPic(lab, ":/back/grass");
			}
			
		}
	}
	human();

	log(temp->getX());
}
int game::fps_num_ctrl = 30;


void game::destination(myLab *lab) {
}
void game::human() {
	//添加人物格
	
	hero->setFixedSize(50, 50);
	hero->move(100, 100);
	hero->setX(20);
	hero->setFixedSize(unitSize, unitSize);
	setPic(hero, ":/man/forward");

	hero->setParent(ui.mainLab);
	log(hero->getX());
}
