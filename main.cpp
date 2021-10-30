#include"time.h"
#include<iostream>
using std::cout;
using std::endl;
int main() 
{
	setlocale(LC_ALL, "");
	DateTime t;
	t.year = 1900;
	t.month = 7;
	t.day = 15;
	t.hour = 11;
	DateTime t1;
	t1.year = 1945;
	t1.month = 8;
	t1.day = 11;
	t1.hour = 8;
	//IsLeapYear
	cout << "Год t високосный:" << IsLeapYear(t) << endl;
	//LaterInYear
	cout << "Какой из двух дней ближе к новому году:" << LaterInYear(t, t1).day << endl;
	//DaysInYear
	cout << "Количество дней в данном году:" << DaysInYear(t) << endl;
	//DaysInYearRange
	cout << "Суммарное количество дней во всех годах находящихся между заданными годами включительно:" << DaysInYearRange(t1, t) << endl;
	//SeconsInHours
	cout << "Количество секунд в данном количестве часов:" << SeconsInHours(t) << endl;
	

}