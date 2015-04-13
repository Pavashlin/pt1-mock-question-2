#pragma once
#ifndef TIME_H
#define TIME_H
using namespace std;

class Time
{
private:
	int h;
	int m;

public:
	friend ostream &operator<<(ostream &, const Time &);
	Time();
	Time(int, int);
	~Time();
	void set(int, int);
	void get(int &x, int &y);
};

#endif

