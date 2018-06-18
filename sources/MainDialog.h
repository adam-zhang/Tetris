#ifndef __MAINDIALOG__H
#define __MAINDIALOG__H

#include <QDialog>

class MainDialog : public QDialog
{
	Q_OBJECT

	public:
		MainDialog();
		virtual ~MainDialog();
	private:
		void initialize();
	private slots:
		void onUpdatingTimer();
	private:
		void createTimer();
};
#endif//__MAINDIALOG__H
