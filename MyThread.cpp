#include "MyThread.h"
#include "qdebug.h"

MyThread::MyThread() {}

void MyThread::run() {
	for (size_t i = 0; i < 5; i++)
	{
		qDebug() << i << endl;
		msleep(1000);
	}
}
