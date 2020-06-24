#pragma once
#include "qthread.h"
class MyThread : public QThread {
public:
	MyThread();
	void closeThread();

protected:
	virtual void run();
private:
	volatile bool isStop();
};