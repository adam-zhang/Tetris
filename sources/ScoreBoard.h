#ifndef __SCOREBOARD__H
#define __SCOREBOARD__H

#include <QWidget>

class ScoreBoard : public QWidget
{
	Q_OBJECT
	public:
		ScoreBoard(QWidget*);
		~ScoreBoard();
	private:
		void initialze();
	protected:
		void paintEvent(QPaintEvent*);
};
#endif//__SCOREBOARD__H
