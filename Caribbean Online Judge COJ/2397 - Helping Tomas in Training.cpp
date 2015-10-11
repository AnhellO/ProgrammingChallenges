#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int t, days1, days2, months1, months2, year1, year2;
string date1, date2;
vector<string> sectionsI, sectionsJ;
vector<string> split(string, string);
int julianDay(int, int, int);

int main()
{
    cin >> t;
    while(t--)
    {
        cin >> date1 >> date2;
        sectionsI = split(date1, "-");
        sectionsJ = split(date2, "-");
        days1 = atoi(sectionsI[2].c_str());
        months1 = atoi(sectionsI[1].c_str());
        year1 = atoi(sectionsI[0].c_str());
        days2 = atoi(sectionsJ[2].c_str());
        months2 = atoi(sectionsJ[1].c_str());
        year2 = atoi(sectionsJ[0].c_str());

        cout << abs(julianDay(year2, months2, days2) - julianDay(year1, months1, days1)) << endl;
    }
    return 0;
}

vector<string> split(string str, string sep)
{
    char* cstr = const_cast<char*>(str.c_str());
    char* current;
    vector<string> arr;
    current = strtok(cstr,sep.c_str());
    while(current != NULL){
        arr.push_back(current);
        current=strtok(NULL,sep.c_str());
    }
    return arr;
}

int julianDay(int year, int month, int day)
{
    int x, y, m;
    x = (14 - month) / 12;
    y = year + 4800 - x;
    m = month + 12 * x - 3;
    return (year > 1582 || (year == 1582 && month > 10) || (year == 1582 && month == 10 && day >= 15)) ? (day + (153 * m + 2) / 5 + (365 * y) + (y / 4) - (y / 100) + (y / 400) - 32045) : (day + (153 * m + 2) / 5 + (365 * y) + (y / 4) - 32083);
}