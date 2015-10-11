#include <iostream>
#include <cstring>
using namespace std;

int n, year, day, i;
string month;
string months[12]={"JANUARY", "FEBRUARY", "MARCH", "APRIL", "MAY", "JUNE", "JULY", "AUGUST", "SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER"};
string days[7] = {"SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY"};
int julianDay(int, int, int);

int main()
{
    cin >> n;
    while(n--)
    {
        cin >> year >> month >> day;
        for(i = 0 ; i < 12 ; i++)
        {
            if(month.compare(months[i]) == 0)
                break;
        }
        i++;
        cout << days[julianDay(year, i, day)] << endl;
    }
    return 0;
}

int julianDay(int year, int month, int day)
{
    int a, m, y;
    a = (14 - month) / 12;
    y = year - a;
    m = month + (12 * a) - 2;
    return (day + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12) % 7;
}