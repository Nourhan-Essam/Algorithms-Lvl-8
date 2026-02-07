//#include <iostream>
//using namespace std;
//
//struct stDate {
//	short year;
//	short month;
//	short day;
//};
//bool isleapYear(short year)
//{
//	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
//}
//short NumberOfDaysInAMonth(short Month, short Year)
//{
//	if (Month < 1 || Month>12)
//		return 0;
//	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	return (Month == 2) ? (isleapYear(Year) ? 29 : 28) :
//		days[Month - 1];
//}
//stDate decreaseDateByOneDay(stDate date)
//{
//	if (date.day == 1)
//	{
//		if (date.month == 1)
//		{
//			date.month = 12;
//			date.day = 31;
//			date.year--;
//		}
//		else
//		{
//			date.month--;
//			date.day = NumberOfDaysInAMonth(date.month, date.year);
//		}
//	}
//	else
//	{
//		date.day--;
//	}
//	return date;
//}
//stDate DecreaseDateByOneWeek(stDate date)
//{
//	for (int i = 1; i <= 7; i++)
//	{
//		date = decreaseDateByOneDay(date);
//	}
//	return date;
//}
//stDate decreaseDateByXWeeks(short weeks, stDate date)
//{
//	for (short i = 1; i <= weeks; i++)
//	{
//		date = DecreaseDateByOneWeek(date);
//	}
//	return date;
//}
//stDate DecreaseDateByOneMonth(stDate date)
//{
//	if (date.month == 1)
//	{
//		date.month = 12;
//		date.year--;
//	}
//	else
//		date.month--;
//
//	//last check day in date should not exceed max days in the current month
//		// example if date is 31/3/2022 decreasing one month should not be 31 / 2 / 2022, it should
//		// be 28/2/2022
//		short NumberOfDaysInCurrentMonth =
//		NumberOfDaysInAMonth(date.month, date.year);
//	if (date.day > NumberOfDaysInCurrentMonth)
//	{
//		date.day = NumberOfDaysInCurrentMonth;
//	}
//	return date;
//}
//stDate decreaseDateByXDays(short day, stDate date)
//{
//	for (short i = 1; i <= day; i++)
//	{
//		date = decreaseDateByOneDay(date);
//	}
//	return date;
//}
//stDate decreaseDateByXMonths(short month, stDate date)
//{
//	for (short i = 1; i <= month; i++)
//	{
//		date = DecreaseDateByOneMonth(date);
//	}
//	return date;
//}
//stDate DecreaseDateByOneYear(stDate date)
//{
//	date.year--;
//	return date;
//}
//stDate decreaseDateByXYears(short year, stDate date)
//{
//	for (short i = 1; i <= year; i++)
//	{
//		date = DecreaseDateByOneYear(date);
//	}
//	return date;
//}
//stDate decreaseDateByXYearsFaster(short years, stDate date)
//{
//	date.year -= years;
//	return date;
//}
//stDate DecreaseDateByOneDecade(stDate date)
//{
//	date.year -= 10;
//	return date;
//}
//stDate decreaseDateByXDecades(short decade, stDate date)
//{
//	for (short i = 1; i <= decade * 10; i++)
//	{
//		date = DecreaseDateByOneYear(date);
//	}
//	return date;
//}
//stDate decreaseDateByXDecadesFaster(short decade, stDate date)
//{
//	date.year -= decade * 10;
//	return date;
//}
//stDate DecreaseDateByOneCentury(stDate date)
//{
//	date.year -= 100;
//	return date;
//}
//stDate DecreaseDateByOneMillennium(stDate date)
//{
//	date.year -= 1000;
//	return date;
//}
//short ReadDay()
//{
//	short day;
//	cout << "\nPlease Enter a Day? ";
//	cin >> day;
//	return day;
//}
//short ReadMonth()
//{
//	short month;
//	cout << "\nPlease Enter a Month? ";
//	cin >> month;
//	return month;
//}
//short ReadYear()
//{
//	short year;
//	cout << "\nPlease Enter a Year? ";
//	cin >> year;
//	return year;
//}
//stDate ReadFullDate()
//{
//	stDate date;
//	date.day = ReadDay();
//	date.month = ReadMonth();
//	date.year = ReadYear();
//
//	return date;
//}
//int main()
//{
//	stDate Date1 = ReadFullDate();
//	cout << "\nDate After: \n";
//	Date1 = decreaseDateByOneDay(Date1);
//	cout << "\n01-Subtracting one day is: "
//		<< Date1.day << "/" << Date1.month << "/" << Date1.year;
//	Date1 = decreaseDateByXDays(10, Date1);
//	cout << "\n02-Subtracting 10 days is: "
//		<< Date1.day << "/" << Date1.month << "/" << Date1.year;
//	Date1 = DecreaseDateByOneWeek(Date1);
//	cout << "\n03-Subtracting one week is: "
//		<< Date1.day << "/" << Date1.month << "/" << Date1.year;
//	Date1 = decreaseDateByXWeeks(10, Date1);
//	cout << "\n04-Subtracting 10 weeks is: "
//		<< Date1.day << "/" << Date1.month << "/" << Date1.year;
//	Date1 = DecreaseDateByOneMonth(Date1);
//	cout << "\n05-Subtracting one month is: "
//		<< Date1.day << "/" << Date1.month << "/" << Date1.year;
//	Date1 = decreaseDateByXMonths(5, Date1);
//	cout << "\n06-Subtracting 5 months is: "
//		<< Date1.day << "/" << Date1.month << "/" << Date1.year;
//	Date1 = DecreaseDateByOneYear(Date1);
//	cout << "\n07-Subtracting one year is: "
//		<< Date1.day << "/" << Date1.month << "/" << Date1.year;
//	Date1 = decreaseDateByXYears(10, Date1);
//	cout << "\n08-Subtracting 10 Years is: "
//		<< Date1.day << "/" << Date1.month << "/" << Date1.year;
//	Date1 = decreaseDateByXYearsFaster(10, Date1);
//	cout << "\n09-Subtracting 10 Years (faster) is: "
//		<< Date1.day << "/" << Date1.month << "/" << Date1.year;
//	Date1 = DecreaseDateByOneDecade(Date1);
//	cout << "\n10-Subtracting one Decade is: "
//		<< Date1.day << "/" << Date1.month << "/" << Date1.year;
//	Date1 = decreaseDateByXDecades(10, Date1);
//	cout << "\n11-Subtracting 10 Decades is: "
//		<< Date1.day << "/" << Date1.month << "/" << Date1.year;
//	Date1 = decreaseDateByXDecadesFaster(10, Date1);
//	cout << "\n12-Subtracting 10 Decade (faster) is: "
//		<< Date1.day << "/" << Date1.month << "/" << Date1.year;
//	Date1 = DecreaseDateByOneCentury(Date1);
//	cout << "\n13-Subtracting One Century is: "
//		<< Date1.day << "/" << Date1.month << "/" << Date1.year;
//	Date1 = DecreaseDateByOneMillennium(Date1);
//	cout << "\n14-Subtracting One Millennium is: "
//		<< Date1.day << "/" << Date1.month << "/" << Date1.year;
//	system("pause>0");
//	return 0;
//}