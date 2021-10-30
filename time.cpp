#pragma once
#include <ctime>
#include <cassert>
#include"time.h"
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
int DaysInYear(DateTime t)
{
	if (IsLeapYear(t))
	{
		return 366;
	}
	else return 365;
}
int DaysInYearRange(DateTime t1, DateTime t2)
{
	assert(t1.year > t2.year);
	int count = 0;
	for (int i = t1.year; i < t2.year + 1; i++)
	{
		if (i % 100 != 0)
		{
			if (i % 4 == 0)
			{
				count += 366;
			}
			else count += 365;
		}
		else
		{
			if (i % 400 == 0)
				count += 366;
			else count += 365;

		}
	}
	return count;
}
int SeconsInHours(DateTime t) 
{
	return t.hour * 60;
}