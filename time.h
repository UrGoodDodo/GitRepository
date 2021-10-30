#pragma once
#include <ctime>
class DateTime
{
public:
	int year;
	int month;
	int day;
	int hour;
	int min;
	int sec;
	int millisec;
};
bool IsLeapYear(DateTime t) 
{
	if (t.year % 100 != 0)
	{
		return (t.year % 4 == 0);
	}
	else
		return (t.year % 400 == 0);
}
DateTime LaterInYear(DateTime t1, DateTime t2)
{
	if (t1.month > t2.month)
	{
		return t1;
	}
	else if (t1.month == t2.month)
	{
		if (t1.day > t2.day)
		{
			return t1;
		}
		else
			return t2;
	}
	else
		return t2;
}
