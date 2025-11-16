#include <iostream>
using namespace std;

bool IsLeapYear(short year)
{
    if (year % 400 == 0)
    {
        return true;
    }
    else if (year % 100 == 0)
    {
        return false;
    }
    else if (year % 4 == 0)
    {
        return true;
    }
    else {
        return false;
    }
}
short ReadMore()
{
    short year;
    cout << "\nPlease Enter a year\n";
    cin >> year;
    return year;
}
int main()
{
    short year = ReadMore();
    if (IsLeapYear(year))
    {
        cout << "Yes, Year[" << year << " ] is a Leap year.\n";
    }
    else
    {
        cout << "No, Year[" << year << "] isn't a Leap year.\n";
    }
    system("pause > 0");
    return 0;
}

