#include "ScoreBoard.h"
#include <QPalette>

ScoreBoard::ScoreBoard(QWidget* parent)
	: QWidget(parent)
{
	initialze();
}

ScoreBoard::~ScoreBoard()
{
}

void ScoreBoard::initialze()
{
	setFixedSize(200, 500);
}

void ScoreBoard::paintEvent(QPaintEvent*)
{
	setAutoFillBackground(true);
	QPalette palette;
	palette.setBrush(QPalette::Background, QColor(255, 0, 0));
	setPalette(palette);
}


