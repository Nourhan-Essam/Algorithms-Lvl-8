#include<iostream>
using namespace std;

struct stDate {
	short year;
	short month;
	short day;
};
bool isLeapYear(short year)
{
	return (year % 4 == 0 || year % 100 != 0) || (year % 400 == 0);
}
short NumberOfDaysInAMonth(short month, short year)
{
	if (month < 1 || month > 12)
		return 0;

	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	return (month == 2) ? (isLeapYear(year) ? 29 : 28) : days[month - 1];
}
bool IsLastDayInMonth(stDate date)
{
	return (date.day == NumberOfDaysInAMonth(date.month, date.year));
}
bool IsLastMonthInYear(short month)
{
	return (month == 12);
}
stDate IncreaseDateByOneDay(stDate date)
{
	if (IsLastDayInMonth(date))
	{
		if (IsLastMonthInYear(date.month))
		{
			date.month = 1;
			date.day = 1;
			date.year++;
		}
		else
		{
			date.day = 1;
			date.month++;
		}
	}
	else
	{
		date.day++;
	}
	return date;
}
stDate IncreaseDateByOneWeek(stDate date)
{
	for (int i = 0; i <= 7; i++)
	{
		date = IncreaseDateByOneDay(date);
	}
	return date;
}
stDate IncreaseDateByXWeeks(short week, stDate date)
{
	for (short i = 1; i <= week; i++)
	{
		date = IncreaseDateByOneWeek(date);
	}
	return date;
}
stDate IncreaseDateByOneMonth(stDate date)
{
	if (date.month == 12)
	{
		date.month = 1;
		date.year++;
	}
	else
	{
		date.month++;
	}
	//last check day in date should not exceed max days in the current month
   // example if date is 31/1/2022 increasing one month should not be 31 / 2 / 2022, it should  be 28/2/2022
	short numberOfDaysInCurrentMonth = NumberOfDaysInAMonth(date.month, date.year);
	if (date.day > numberOfDaysInCurrentMonth)
	{
		date.day = numberOfDaysInCurrentMonth;
	}
	return date;	
}
stDate IncreaseDateByXDays(short days, stDate date)
{
	for (short i = 1; i <= days; i++)
	{
		date = IncreaseDateByOneDay(date);
	}
	return date;
}
stDate IncreaseDateByXMonths(short months, stDate date)
{
	for (short i = 1; i <= months; i++)
	{
		date = IncreaseDateByOneMonth(date);
	}
	return date;
}
stDate IncreaseDateByOneYear(stDate date)
{
	date.year++;
	return date;
}
stDate IncreaseDateByXYear(short years, stDate date)
{
	for (short i = 1; i <= years; i++)
	{
		date = IncreaseDateByOneYear(date);
	}
	return date;
}
stDate IncreaseDateByXYearsFaster(short years, stDate date)
{
	date.year += years;
	return date;
}
stDate IncreaseDateByOneDecade(stDate date)
{
	date.year += 10;
	return date;
}
stDate  IncreaseDateByXDecades(short decade, stDate date)
{
	for (short i = 1; i <= decade * 10; i++)
	{
		date = IncreaseDateByOneYear(date);
	}
	return date;
}
stDate IncreaseDateByXDecadesFaster(short decade, stDate date)
{
	date.year += decade * 10;
	return date;
}
stDate IncreaseDateByOneCentury(stDate date)
{
	date.year += 100;
	return date;
}
stDate IncreaseDateByOneMillennium(stDate date)
{
	date.year += 1000;
	return date;
}
short ReadDay()
{
	short Day;
	cout << "\nPlease enter a Day? ";
	cin >> Day;
	return Day;
}
short ReadMonth()
{
	short Month;
	cout << "Please enter a Month? ";
	cin >> Month;
	return Month;
}
short ReadYear()
{
	short Year;
	cout << "Please enter a Year? ";
	cin >> Year;
	return Year;
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
	stDate date1 = ReadFullDate();
	cout << "\nDate After: \n";
	date1 = IncreaseDateByOneDay(date1);
	cout << "\n01-Adding one day is: "
		<< date1.day << "/" << date1.month << "/" << date1.year;
	date1 = IncreaseDateByXDays(10, date1);
	cout << "\n02-Adding 10 days is: "
		<< date1.day << "/" << date1.month << "/" << date1.year;
	date1 = IncreaseDateByOneWeek(date1);
	cout << "\n03-Adding one week is: "
		<< date1.day << "/" << date1.month << "/" << date1.year;
	date1 = IncreaseDateByXWeeks(10, date1);
	cout << "\n04-Adding 10 weeks is: "
		<< date1.day << "/" << date1.month << "/" << date1.year;
	date1 = IncreaseDateByOneMonth(date1);
	cout << "\n05-Adding one month is: "
		<< date1.day << "/" << date1.month << "/" << date1.year;
	date1 = IncreaseDateByXMonths(5, date1);
	cout << "\n06-Adding 5 months is: "
		<< date1.day << "/" << date1.month << "/" << date1.year;
	date1 = IncreaseDateByOneYear(date1);
	cout << "\n07-Adding one year is: "
		<< date1.day << "/" << date1.month << "/" << date1.year;
	date1 = IncreaseDateByXYear(10, date1);
	cout << "\n08-Adding 10 Years is: "
		<< date1.day << "/" << date1.month << "/" << date1.year;
	date1 = IncreaseDateByXYearsFaster(10, date1);
	cout << "\n09-Adding 10 Years (faster) is: "
		<< date1.day << "/" << date1.month << "/" << date1.year;
	date1 = IncreaseDateByOneDecade(date1);
	cout << "\n10-Adding one Decade is: "
		<< date1.day << "/" << date1.month << "/" << date1.year;
	date1 = IncreaseDateByXDecades(10, date1);
	cout << "\n11-Adding 10 Decades is: "
		<< date1.day << "/" << date1.month << "/" << date1.year;
	date1 = IncreaseDateByXDecadesFaster(10, date1);
	cout << "\n12-Adding 10 Decade (faster) is: "
		<< date1.day << "/" << date1.month << "/" << date1.year;
	date1 = IncreaseDateByOneCentury(date1);
	cout << "\n13-Adding One Century is: "
		<< date1.day << "/" << date1.month << "/" << date1.year;
	date1 = IncreaseDateByOneMillennium(date1);
	cout << "\n14-Adding One Millennium is: "
		<< date1.day << "/" << date1.month << "/" << date1.year;
}