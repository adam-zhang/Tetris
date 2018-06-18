#ifndef __GAME__H
#define __GAME__H

#include "Singleton.h"

class Game : public Singleton<Game>
{
	public:
		Game();
		~Game();
	public:
		void start();
		void stop();
	public:
		int rows()
		{ return 20;}
		int columns()
		{ return 12;}
};

#endif//__GAME__H
