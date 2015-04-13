
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
	if (T.m == 0)
	{
		out << T.h << ":" << T.m <<0<< endl;
	}
	else
	{
		out << T.h << ":" << T.m << endl;
	}
	return out;
}

Time Time::operator++(int)
{
	Time Temp(h, m);
	if (m == 59)
	{
		h++;
		m = 00;
	}
	else
	{
		m++;
	}
	
	if (h > 23)
	{
		h = 00;
	}
	return Temp;

}