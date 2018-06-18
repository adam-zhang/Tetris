#ifndef __DATA__H
#define __DATA__H

#include <array>
#include <map>
#include <vector>

class Data
{
	public:
		enum
		{
			BLOCK,
			LEFT_L,
			RIGHT_L,
			LEFT_S,
			RIGHT_S,
			MOUNTAIN,
			LINE, 
		};

	public:
		Data();
		~Data();
	public:
		std::vector<std::vector<int>> pattern();
	private:
		std::map<size_t, std::vector<std::vector<int>>> data_;
};
#endif//__DATA__H
