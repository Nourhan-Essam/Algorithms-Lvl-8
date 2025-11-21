#include <iostream>
using namespace std;

//short DayOfWeekOrder(short Day, short Month, short Year)
//{
//	short a, y, m;
//	a = (14 - Month) / 12;
//	y = Year - a;
//	m = Month + (12 * a) - 2;
//	//Gregorian: 0: Sun, 1:Mon, 2: Tue...etc
//	return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
//}
//string DayName(short  DayOfWeekOrder)
//{
//	string arrDayName[] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
//	return arrDayName[DayOfWeekOrder];
//}
//short ReadDay()
//{
//	short Day;
//	cout << "\nPlease Enter a Day?";
//	cin >> Day;
//	return Day;
//}
//short ReadMonth()
//{
//	short Month;
//	cout << "\nPlease Enter a Month?";
//	cin >> Month;
//	return Month;
//}
//short ReadYear()
//{
//	short Year;
//	cout << "\nPlease Enter a Year?";
//	cin >> Year;
//	return Year;
//}
//int main()
//{
//	short Year = ReadYear();
//	short Month = ReadMonth();
//	short Day = ReadDay();
//
//	cout << "\nDate : " << Day << "/" << Month << "/" << Year;
//	cout << "\nDay Order: " << DayOfWeekOrder(Day, Month, Year);
//	cout << "\nDay Name: " << DayName(DayOfWeekOrder(Day, Month, Year));
//}