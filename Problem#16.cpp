//#include <iostream>
//using namespace std;
//
//struct stDate {
//	short year;
//	short month;
//	short day;
//};
//bool isLeapYear(short year)
//{
//	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
//}
//short NumberOfDaysInMonth(short month, short year)
//{
//	if (month < 1 || month > 12)
//		return 0;
//
//	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	return (month == 2) ? (isLeapYear(year) ? 29 : 28) : days[month - 1];
//}
//bool IsLastDayInMonth(stDate date)
//{
//	return (date.day == NumberOfDaysInMonth(date.month, date.year));
//}
//bool IsLastMonthInYear(short month)
//{
//	return (month == 12);
//}
//stDate IncreaseDateByOneDay(stDate date)
//{
//	if (IsLastDayInMonth(date))
//	{
//		if (IsLastMonthInYear(date.month))
//		{
//			date.month = 1;
//			date.day = 1;
//			date.year++;
//		}
//		else {
//			date.day = 1;
//			date.month++;
//		}
//	}
//	else
//	{
//		date.day++;
//	}
//	return date;
//}
//short ReadDay()
//{
//	short day;
//	cout << "\nPlease enter a day? ";
//	cin >> day;
//	return day;
//}
//short ReadMonth()
//{
//	short month;
//	cout << "\nPlease enter a month? ";
//	cin >> month;
//	return month;
//}
//short ReadYear()
//{
//	short year;
//	cout << "\nPlease enter a year? ";
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
//	stDate oldDate = ReadFullDate();
//	oldDate = IncreaseDateByOneDay(oldDate);
//	cout << "\nDate after adding one day is: " << oldDate.day << "/" << oldDate.month << "/" << oldDate.year;
//}