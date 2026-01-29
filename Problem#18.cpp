//#pragma warning(disable : 4996)
//#include <iostream>
//using namespace std;
//
//struct stDate 
//{
//	short year;
//	short month; 
//	short day;
//};
//bool isLeapYear(short year)
//{
//	return (year % 4 && year % 100 != 0) || (year % 400 == 0);
//}
//bool IsDate1BeforeDate2(stDate date1, stDate date2)
//{
//    if (date1.year < date2.year) return true;
//    if (date1.year > date2.year) return false;
//
//    // إذا وصلنا هنا، يعني السنوات متساوية
//    if (date1.month < date2.month) return true;
//    if (date1.month > date2.month) return false;
//
//    // إذا وصلنا هنا، يعني السنوات والشهور متساوية
//    return date1.day < date2.day;
//}
//short NumberOfDaysInAMonth(short month, short year) {
//    if (month < 1 || month > 12)
//        return 0;
//
//    int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//    return (month == 2) ? (isLeapYear(year) ? 29 : 28) : days[month - 1];
//}
//bool isLastDayInMonth(stDate date)
//{
//    return (date.day == NumberOfDaysInAMonth(date.month,
//        date.year));
//}
//bool IsLastMonthInYear(short month)
//{
//    return (month == 12);
//}
//stDate IncreaseDateByOneDate(stDate date)
//{
//    if (isLastDayInMonth(date))
//    {
//        if (IsLastMonthInYear(date.month))
//        {
//            date.month = 1;
//            date.day = 1;
//            date.year++;
//        }
//        else
//        {
//            date.day = 1;
//            date.month++;
//        }
//    }
//    else
//    {
//        date.day++;
//    }
//    return date;
//}
//int getDifferenceInDays(stDate date1, stDate date2, bool IncludeEndDay = false)
//{
//    int days = 0;
//    while (IsDate1BeforeDate2(date1, date2))
//    {
//        days++;
//        date1 = IncreaseDateByOneDate(date1);
//    }
//    return IncludeEndDay ? ++days : days;
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
//stDate GetSystemDate()
//{
//    stDate date;
//    time_t t = time(0);
//    tm* now = localtime(&t);
//
//    date.year = now->tm_year + 1900;
//    date.month = now->tm_mon + 1;
//    date.day = now->tm_mday;
//    return date;
//}
//int main()
//{
//    cout << "Please Enter your Date of birth\n";
//    stDate date1 = ReadFullDate();
//    stDate date2 = GetSystemDate();
//    cout << "\nYour Age is : "
//        << getDifferenceInDays(date1, date2, true) << " Day(s).";
//}