//#include <iostream>
//using namespace std;
//
//struct stDate
//{
//	short year;
//	short month;
//	short day;
//};
//bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
//{
//	return (Date1.year < Date2.year) ? true : ((Date1.year == Date2.year) ? (Date1.month < Date2.month ? true : (Date1.month == Date2.month ? Date1.day < Date2.day : false)) : false);
//}
//
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
//int main()
//{
//	stDate Date1 = ReadFullDate();
//	stDate Date2 = ReadFullDate();
//
//	if(IsDate1BeforeDate2(Date1, Date2))
//		cout << "\nYes, Date1 is Less than Date2.";
//	else
//		cout << "\nNo, Date1 is NOT Less than Date2.";
//	return 0;
//}