//#include <iostream>
//using namespace std;
//
//bool isleapyear(short year)
//{
//	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
//}
//short DayOfWeekOrder(short Day, short Month, short Year)
//{
//	short a, y, m;
//	a = (14 - Month) / 12;
//	y = Year - a;
//	m = Month + (12 * a) - 2;
//	return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m) / 12)) % 7;
//}
//string DayName( short DayOfWeekOrder)
//{
//	string arrDayName[] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };
//	return arrDayName[DayOfWeekOrder];
//}
//short NumberOfDaysInAMonth(short Month, short Year)
//{
//	if (Month < 1 || Month > 12)
//		return 0;
//	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	return (Month == 2) ? (isleapyear(Year) ? 29 : 28) : days[Month - 1];
//}
//string MonthShortName(short MonthNum)
//{
//	string Months[12] = { "Jan", "Feb", "March", "April", "May" ,"June", "July", "Aug", "Sep", "Oct", "Nov", "Dec" };
//	return (Months[MonthNum - 1]);
//}
//void PrintMonthCalendar(short Month, short Year)
//{
//	int NumberOfDays;
//	int current = (DayOfWeekOrder(1, Month, Year));		//Index of the day from 0 to 6
//	NumberOfDays = NumberOfDaysInAMonth(Month, Year);
//	printf("\n  _______________%s_______________\n\n", MonthShortName(Month).c_str());	//Print the current month name
//	printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n"); //Print Columns
//
//	// Print appropriate spaces
//	int i;
//	for (i = 0; i < current; i++)
//		printf("     ");
//
//	for (int j = 1; j <= NumberOfDays; j++)
//	{
//		printf("%5d", j);
//
//		if (++i == 7)
//		{
//			i = 0;
//			printf("\n");
//		}
//	}
//	printf("\n  _________________________________\n");
//}
//void PrintYearCalendar(int Year)
//{
//	printf("\n  _________________________________\n\n");     
//	printf("           Calendar - %d\n", Year);     
//	printf("  _________________________________\n");
//	for (int i = 1; i <= 12; i++)
//	{
//		PrintMonthCalendar(i, Year);
//	}
//	return;
//}
//short ReadYear()
//{
//	short Year;
//	cout << "\nPlease Enter a Year?";
//	cin >> Year;
//	return Year;
//}
////int main()
////{
////	PrintYearCalendar(ReadYear());
////	
////}