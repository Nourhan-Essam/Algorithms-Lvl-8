#include <iostream>
using namespace std;

//bool isLeapYear(short year)
//{
//	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
//}
//short NumOfDays(short year)
//{
//	return isLeapYear(year) ? 366 : 365;
//}
//short NumOfHours(short year)
//{
//	return NumOfDays(year) * 24;
//}
//int NumOfMinutes(short year)
//{
//	return NumOfHours(year) * 60;
//}
//int NumOfSeconds(short year)
//{
//	return NumOfMinutes(year) * 60;
//}
//short ReadNumer()
//{
//	short year;
//	cout << "please enter number of year.\n";
//	cin >> year;
//	return year;
//}
//int main()
//{
//	short year = ReadNumer();
//	cout << "\nNumer of Days in Year [" << year << "] is " << NumOfDays(year);
//	cout << "\nNumber of Hours in Year [" << year << "] is " << NumOfHours(year);
//	cout << "\nNumber of Minutes in Year [" << year << "] is " << NumOfMinutes(year);
//	cout << "\nNumber of Seconds in Year [" << year << "] is " << NumOfSeconds(year);
//	
//}