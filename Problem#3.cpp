#include <iostream>
using namespace std;

bool IsLeapYear(short year)
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
short ReadNum()
{
	short year;
	cout << "\nPlease Enter a year number?\n";
	cin >> year;
	return year;
}
//int main()
//{
//	short year = ReadNum();
//	if (IsLeapYear(year))
//		cout << "\nyes, this year is a leap year.\n";
//	else
//		cout << "\nno, this year isn't a leap year.\n";
//}