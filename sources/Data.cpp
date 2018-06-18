#include "Data.h"
#include <ctime>
#include <cstdio>

using namespace std;

Data::Data()
	: data_(
			{{BLOCK, {
				{0,0,0,0}, 
				{0,1,1,0},
			       	{0,1,1,0},
			       	{0,0,0,0}}},
			{LEFT_L,{
		       		{0,0,1,0},
				{0,0,1,0},
				{0,1,1,0},
				{0,0,0,0}}},
			{RIGHT_L,{
			{0,1,0,0},
		       	{0,1,0,0},
		       	{0,1,1,0},
		       	{0,0,0,0}}}
			, {RIGHT_S,{
			{0,1,0,0},
			{0,1,1,0},
			{0,0,1,0},
			{0,0,0,0}}}
			, {LEFT_S, {
				{0,0,1,0},
				{0,1,1,0},
				{0,1,0,0},
				{0,0,0,0}}}
			,{MOUNTAIN, {
				{0,0,0,0},
				{0,0,1,0},
				{0,1,1,1},
				{0,0,0,0}}},
			  {LINE,{
					{0,0,1,0},
					{0,0,1,0},
					{0,0,1,0},
					{0,0,1,0}}}
			}
	       )
{
	srand(time(NULL));
}

vector<vector<int>> Data::pattern()
{
	size_t index = rand() % 6;
	return data_[index];
}
