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
int SecondsInMinute(DateTime t) 
{
	return 60;
}
