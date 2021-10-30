#pragma once
#include <ctime>
#include <cassert>
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
bool IsLeapYear(DateTime t);
DateTime LaterInYear(DateTime t1, DateTime t2);
int DaysInYear(DateTime t);
int DaysInYearRange(DateTime t1, DateTime t2);
int SeconsInHours(DateTime t);