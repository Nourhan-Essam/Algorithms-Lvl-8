#include<iostream>
using namespace std;

//bool isLeapYear(short year)
//{
//	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
//}
//short NumberOfDaysInMonth(short month, short year)
//{
//	if (month < 1 || month > 12)
//		return 0;
//
//	int NumOfDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	return (month == 2) ? (isLeapYear(year) ? 29 : 28) : NumOfDays[month - 1];
//}
//short ReadMonth()
//{
//	short month;
//	cout << "Please Enter a month to check?";
//	cin >> month;
//	return month;
//}
//short ReadYear()
//{
//	short year;
//	cout << "\nPlease Enter a year to check?";
//	cin >> year;
//	return year;
//}
//int main()
//{
//	short year = ReadYear();
//	short month = ReadMonth();
//	cout << "\nNumber of Days in Month[" << month << "] is " << NumberOfDaysInMonth(month, year);
//}