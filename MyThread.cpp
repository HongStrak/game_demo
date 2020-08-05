#include "MyThread.h"
#include "qdebug.h"

MyThread::MyThread(MyRunable *Runable) {
	this->Runable = Runable;
}
MyThread::MyThread() {}

void MyThread::run() {
	this->Runable->run();
}

