//#include <iostream>
//using namespace std;
//
//struct stDate {
//	short year;
//	short month;
//	short day;
//};
//bool IsDate1EqualDate2(stDate Date1, stDate Date2)
//{
//	return (Date1.year == Date2.year) ? ((Date1.month ==
//		Date2.month) ? ((Date1.day == Date2.day) ? true : false)
//		: false) : false;
//}
//short ReadYear()
//{
//	short year;
//	cout << "\nPlease Enter a year? ";
//	cin >> year;
//	return year;
//}
//short ReadMonth()
//{
//	short month;
//	cout << "\nPlease Enter a month? ";
//	cin >> month;
//	return month;
//}
//short ReadDay()
//{
//	short day;
//	cout << "\nPlease Enter a Day? ";
//	cin >> day;
//	return day;
//}
//stDate ReadFullDate()
//{
//	stDate Date;
//	Date.day = ReadDay();
//	Date.month = ReadMonth();
//	Date.year = ReadYear();
//	return Date;
//}
//int main()
//{
//	stDate Date1 = ReadFullDate();
//	stDate Date2 = ReadFullDate();
//
//	if (IsDate1EqualDate2(Date1, Date2))
//		cout << "\nYes, Date1 is Equal To Date2";
//	else
//		cout << "\nNo, Date1 isn't Equal To Date2";
//}