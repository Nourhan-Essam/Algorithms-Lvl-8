#include <iostream>
using namespace std;

struct stDate 
{
	short year;
	short month;
	short day;
};
bool isLeapYear(short year)
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
short NumberOfDaysInAMonth(short Month, short Year)
{
	if (Month < 1 || Month>12)
		return 0;
	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) :days[Month - 1];
}
bool IsLastDayInAMonth(stDate Date)
{
	return(Date.day == NumberOfDaysInAMonth(Date.month, Date.year));
}
bool IsLastMonthInAYear(short month)
{
	return (month == 12);
}
short ReadDay()
{
	short day;
	cout << "\nPlease Enter a day? ";
	cin >> day;
	return day;
}
short ReadMonth()
{
	short month;
	cout << "\nPlease Enter a month? ";
	cin >> month;
	return month;
}
short ReadYear()
{
	short year;
	cout << "\nPlease Enter a Year? ";
	cin >> year;
	return year;
}
stDate ReadFullDate()
{
	stDate Date;
	Date.day = ReadDay();
	Date.month = ReadMonth();
	Date.year = ReadYear();
	return Date;
}
int main()
{
	stDate Date1 = ReadFullDate();
	if (IsLastDayInAMonth(Date1))
		cout << "\nYes, Day is Last Day in Month";
	else
		cout << "\nNo, Day isn't Last Day in Month";

	if (IsLastMonthInAYear(Date1.month))
		cout << "\nYes, Month is Last Month in Year";
	else
		cout << "\nNo, Month isn't Last Month in Year";

	return 0;
}