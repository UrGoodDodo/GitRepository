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
	cout << "��� t ����������:" << IsLeapYear(t) << endl;
	//LaterInYear
	cout << "����� �� ���� ���� ����� � ������ ����:" << LaterInYear(t, t1).day << endl;
	//DaysInYear
	cout << "���������� ���� � ������ ����:" << DaysInYear(t) << endl;
	//DaysInYearRange
	cout << "��������� ���������� ���� �� ���� ����� ����������� ����� ��������� ������ ������������:" << DaysInYearRange(t1, t) << endl;
	//SeconsInHours
	cout << "���������� ������ � ������ ���������� �����:" << SeconsInHours(t) << endl;
	

}