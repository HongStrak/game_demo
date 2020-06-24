#include "game.h"
#include <QtWidgets/QApplication>
#include "MyThread.h"
#include "qdebug.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	

	game w;
	w.show();
	return a.exec();
}
