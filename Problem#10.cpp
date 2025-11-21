#include <iostream>
using namespace std;

bool isleapyear(short year)
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
short NumberOfDaysInAMonth(short Month, short Year)
{
	if (Month < 1 || Month > 12)
		return 0;
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	return (Month == 2) ? (isleapyear(Year) ? 29 : 28) : days[Month - 1];
}
short NumberOfDaysFromTheBeginingOfTheYear(short Day, short Month, short Year)
{
	short TotalDays = 0;
	for (int i = 1; i <= 12; i++)
	{
		TotalDays += NumberOfDaysInAMonth(i, Year);
	}
	TotalDays += Day;
	return TotalDays;
}
short ReadDay()
{
	short Day;
	cout << "\nPlease Enter a Day?";
	cin >> Day;
	return Day;
}
short ReadMonth()
{
	short Month;
	cout << "\nPlease Enter a Month?";
	cin >> Month;
	return Month;
}
short ReadYear()
{
	short Year;
	cout << "\nPlease Enter a Year?";
	cin >> Year;
	return Year;
}
int main()
{
	short Day = ReadDay();
	short Month = ReadMonth();
	short Year = ReadYear();
	cout << "\nNumber Of Days from the begining of the year is " << NumberOfDaysFromTheBeginingOfTheYear(Day, Month, Year);
}