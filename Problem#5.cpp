#include <iostream>
using namespace std;

bool isLeapYear(short year)
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
short NumberOfDaysInMonth(short month, short year)
{
	if (month < 1 || month > 12)
		return 0;

	if (month == 2)
	{
		return isLeapYear(year) ? 29 : 28;
	}

	short arr31days[7] = { 1, 3, 5, 7, 8, 10, 12 };
	for (short i = 1; i <= 7; i++)
	{
		if (arr31days[i - 1] == month)
			return 31;
	}
	return 30;
}
short NumOfHoursInMonth(short month, short year)
{
	return NumberOfDaysInMonth(month ,year) * 24;
}
int NumOfMinutesInMonth(short month ,short year)
{
	return NumOfHoursInMonth(month ,year) * 60;
}
int NumOfSecondsInMonth(short month ,short year)
{
	return NumOfMinutesInMonth(month ,year) * 60;
}
short ReadYear()
{
	short year;
	cout << "please enter number of year.\n";
	cin >> year;
	return year;
}
short ReadMonth()
{
	short month;
	cout << "\nplease enter number of month.\n";
	cin >> month;
	return month;
}
int main()
{
	short year = ReadYear();
	short month = ReadMonth();
	cout << "\nNumber of Days in Month [" << month << "] is " << NumberOfDaysInMonth(month, year);
	cout << "\nNumber of Hours in Month [" << month << "] is " << NumOfHoursInMonth(month, year);
	cout << "\nNumber of Minutes in Month [" << month << "] is " << NumOfMinutesInMonth(month, year);
	cout << "\nNumber of Seconds in Month [" << month << "] is " << NumOfSecondsInMonth(month, year);
}