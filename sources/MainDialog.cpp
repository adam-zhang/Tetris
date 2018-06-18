#include "MainDialog.h"
#include <cassert>
#include <QTimer>
#include <QDebug>
#include <iostream>

MainDialog::MainDialog()
{
	initialize();
}

MainDialog::~MainDialog()
{
}

void MainDialog::createTimer()
{
	auto timer = new QTimer(this);
	assert(timer);
	connect(timer, SIGNAL(timeout()), this, SLOT(onUpdatingTimer()));
	timer->start(1000);
}


void MainDialog::initialize()
{
	setFixedSize(400, 300);
	createTimer();
}

void MainDialog::onUpdatingTimer()
{
	qDebug() << "Hello Timer";
	//std::cout << 
}


