#include "game.h"
#include "ui_game.h"
#include <qlabel.h>
#include "MyRunable.h"

game::game(QWidget *parent)
	: QMainWindow(parent)
{
	
	init();

	//初始化每一格
	for (int i = 0; i < widthNum; i++)
	{
		for (int j = 0; j < heightNum; j++) {
			myLab *lab = new myLab;
			lab->setX(i);
			lab->setY(j);
			lab->move(i * unitSize, j * unitSize);
			lab->setFixedSize(unitSize, unitSize);
			lab->setParent(ui.mainLab);
			lab->hero = this->hero;
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

}
int game::fps_num_ctrl = 30;
int game::unitSize = 30;


void game::destination(myLab *lab) {
}
void game::human() {
	//添加人物格     
	
	hero->moveOn(0, 2);
	hero->setFixedSize(unitSize, unitSize);
	setPic(hero, ":/man/forward");

	hero->setParent(ui.mainLab);
	log(hero->getX());
}

void MyRunable::run() {
	//qDebug() << "hello i am tony" << endl;
}