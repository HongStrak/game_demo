#pragma once
#include "qthread.h"
#include "MyRunable.h"

class MyThread : public QThread {
public:
	MyThread(MyRunable *Runable);
	void closeThread();

protected:
	virtual void run();
private:
	MyThread();
	MyRunable* Runable;
	volatile bool isStop();
};

