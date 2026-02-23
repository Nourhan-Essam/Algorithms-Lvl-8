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
//	return (date1.year < date2.year) ? true : ((date1.year == date2.year) ? (date1.month < date2.month ? true : (date1.month == date2.month ? date1.day < date2.day : false)) : false);
//}
//bool IsDate1EqualDate2(stDate date1, stDate date2)
//{
//	return (date1.year == date2.year) ? ((date1.month == date2.month) ? ((date1.day == date2.day) ? true : false) : false ) : false;
//}
//bool IsDate1AfterDate2(stDate date1, stDate date2)
//{
//	return (!IsDate1BeforeDate2(date1, date2) && !IsDate1EqualDate2(date1, date2));
//}
//enum enDateCompare{Before = -1, Equal = 0, After = 1};
//enDateCompare compareDates(stDate date1, stDate date2)
//{
//	if (IsDate1BeforeDate2(date1, date2))
//		return enDateCompare::Before;
//
//	if (IsDate1EqualDate2(date1, date2))
//		return enDateCompare::Equal;
//
//	return enDateCompare::After;
//}
//bool IsPeriodOverlaps(stPeriod period1, stPeriod period2)
//{
//	if (compareDates(period2.endDate, period1.startDate) == enDateCompare::Before || compareDates(period2.startDate, period1.endDate) == enDateCompare::After)
//		return false;
//	else
//		return true;
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
//	return date;
//}
//stPeriod ReadPeriod()
//{
//	stPeriod period;
//	cout << "\nEnter Start Date:\n";
//	period.startDate = ReadFullDate();
//	cout << "\nEnter End Date:\n";
//	period.endDate = ReadFullDate();
//	return period;
//}
//int main()
//{
//	cout << "\nEnter Period1: ";
//	stPeriod period1 = ReadPeriod();
//	cout << "\nEnter Period2: ";
//	stPeriod period2 = ReadPeriod();
//	if (IsPeriodOverlaps(period1, period2))
//		cout << "\nYes, The Two Periods Overlap.\n";
//	else
//		cout << "\nNo, The Two Periods don't Overlap.\n";
//}