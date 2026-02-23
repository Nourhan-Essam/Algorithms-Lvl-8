//#include <iostream>
//using namespace std;
//
//struct stDate
//{
//	short year;
//	short month;
//	short day;
//};
//struct stPeriod
//{
//	stDate startDate;
//	stDate endDate;
//};
//bool IsDate1BeforeDate2(stDate date1, stDate date2)
//{
//	return (date1.year < date2.year) ? true : ((date1.year ==
//		date2.year) ? (date1.month < date2.month ? true : (date1.month ==
//			date2.month ? date1.day < date2.day : false)) : false);
//}
//bool IsDate1EqualDate2(stDate Date1, stDate Date2)
//{
//	return (Date1.year == Date2.year) ? ((Date1.month ==
//		Date2.month) ? ((Date1.day == Date2.day) ? true : false) : false)
//		: false;
//}
//bool IsDate1AfterDate2(stDate Date1, stDate Date2)
//{
//	return (!IsDate1BeforeDate2(Date1, Date2) &&
//		!IsDate1EqualDate2(Date1, Date2));
//}
//bool isLeapYear(short Year)
//{
//	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
//}
//short NumberOfDaysInAMonth(short Month, short Year)
//{
//	if (Month < 1 || Month>12)
//		return 0;
//	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) :
//		days[Month - 1];
//}
//bool IsLastDayInMonth(stDate Date)
//{
//	return (Date.day == NumberOfDaysInAMonth(Date.month,
//		Date.year));
//}
//bool IsLastMonthInYear(short Month)
//{
//	return (Month == 12);
//}
//stDate IncreaseDateByOneDay(stDate Date)
//{
//	if (IsLastDayInMonth(Date))
//	{
//		if (IsLastMonthInYear(Date.month))
//		{
//			Date.month = 1;
//			Date.day = 1;
//			Date.year++;
//		}
//		else
//		{
//			Date.day = 1;
//			Date.month++;
//		}
//	}
//	else
//	{
//		Date.day++;
//	}
//	return Date;
//}
//int GetDifferenceInDays(stDate Date1, stDate Date2, bool
//	IncludeEndDay = false)
//{
//	int Days = 0;
//	while (IsDate1BeforeDate2(Date1, Date2))
//	{
//		Days++;
//		Date1 = IncreaseDateByOneDay(Date1);
//	}
//	return IncludeEndDay ? ++Days : Days;
//}
//int PeriodLengthInDays(stPeriod period, bool includeEndDate = false)
//{
//	return GetDifferenceInDays(period.startDate, period.endDate, includeEndDate);
//}
//short ReadDay()
//{
//	short Day;
//	cout << "\nPlease enter a Day? ";
//	cin >> Day;
//	return Day;
//}
//short ReadMonth()
//{
//	short Month;
//	cout << "Please enter a Month? ";
//	cin >> Month;
//	return Month;
//}
//short ReadYear()
//{
//	short Year;
//	cout << "Please enter a Year? ";
//	cin >> Year;
//	return Year;
//}
//stDate ReadFullDate()
//{
//	stDate Date;
//	Date.day = ReadDay();
//	Date.month = ReadMonth();
//	Date.year = ReadYear();
//	return Date;
//}
//stPeriod ReadPeriod()
//{
//	stPeriod Period;
//	cout << "\nEnter Start Date:\n";
//	Period.startDate = ReadFullDate();
//	cout << "\nEnter End Date:\n";
//	Period.endDate = ReadFullDate();
//	return Period;
//}
//int main()
//{
//	cout << "\nEnter Period 1:";
//	stPeriod Period1 = ReadPeriod();
//	cout << "\nPeriod Length is: " << PeriodLengthInDays(Period1);
//	cout << "\nPeriod Length (Including End Date) is: " <<
//		PeriodLengthInDays(Period1, true);
//	system("pause>0");
//}