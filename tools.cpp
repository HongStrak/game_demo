#include "game.h"
#include <qdebug.h>
#include "qsettings.h"
#include "unit.h"
#include "myLab.h"


//label 设置图片
void game::setPic(QLabel* lab, QString str) {
	QImage imag;
	imag.load(str);
	QPixmap map = QPixmap::fromImage(imag);
	lab->setPixmap(map);
	lab->setScaledContents(true);
}

void game::log(QString str) {
	qDebug() << str << endl;
}
void game::log(int i) {
	qDebug() << i << endl;
}

//设置配置文件
void game::setOption(QString key, QString value) {
	QSettings settings("./Option.ini", QSettings::IniFormat);
	settings.beginGroup("default");
	settings.setValue(key, value);
	settings.endGroup();

	
}

void game::setOption(QString group, QString key, QString value) {
	QSettings settings("./Option.ini", QSettings::IniFormat);
	settings.beginGroup(group);
	settings.setValue(key, value);
	settings.endGroup();
}

QVariant game::getOption(QString key) {
	QSettings settingsread("Option.ini", QSettings::IniFormat);
	return settingsread.value("default/" + key);
}

QVariant game::getOption(QString group, QString key) {
	QSettings settingsread("Option.ini", QSettings::IniFormat);
	return settingsread.value(group + "/" + key);
}

void myLab::mouseReleaseEvent(QMouseEvent* e) {
	Q_UNUSED(e);
	emit clicked(this);
}

void myLab::destination(myLab *lab)
{
	qDebug() << "x is " << lab->getX() << ", y is " << lab->getY() << endl;
	qDebug() << "hero x is " << QString::number(lab->hero->getX()) << endl;
	lab->hero->moveRight();
}

myLab::myLab(QWidget* parent):QLabel(parent) {
}

//管理员函数
void game::productMap() { //生成地图
	//把随机的草地写入配置文件中
	fullGrassOnOption();  //满屏幕草地
}
void game::fullGrassOnOption() {//在配置文件中满屏幕长草
	QString map = "map_newHere";
	for (size_t i = 0; i < widthNum; i++)
	{
		for (int j = 0; j < heightNum; j++) {
			QString temp = QString::number(i) + "," + QString::number(j);
			
			int random = qrand() % 100;
			if (random <= 33)
			{
				setOption(map, temp, ":/back/grass2");
			}
			else
			{
				setOption(map, temp, ":/back/grass");
			}
			
		}
	}
}