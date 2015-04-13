
#include <iostream>
#include "Time.h"                       //******always after iostream for friendhsip to work
#include <string>

using namespace std;


Time::Time()
{
	h = 0;
	m = 0;
}


Time::~Time()
{
}

Time::Time(int x, int y)
{
	h = x;
	m = y;
}

void Time::set(int x, int y)
{
	h = x;
	m = y;
}

void Time::get(int &x, int &y)
{
	x = h;
	y = m;
}

ostream& operator<<(ostream& out, const Time& T)

{
	out << T.h << ":" << T.m << endl;
	return out;
}