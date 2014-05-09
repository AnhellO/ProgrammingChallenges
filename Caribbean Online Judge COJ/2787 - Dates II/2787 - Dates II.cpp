#include <cstdio>
#include <cstdlib>
using namespace std;

int y1, y2, m1, m2, d1, d2;

int julianDay(int year, int month, int day)
{
    int x, y, m;
    x = (14 - month) / 12;
    y = year + 4800 - x;
    m = month + 12 * x - 3;
    return (year > 1582 || (year == 1582 && month > 10) || (year == 1582 && month == 10 && day >= 15)) ? (day + (153 * m + 2) / 5 + (365 * y) + (y / 4) - (y / 100) + (y / 400) - 32045) : (day + (153 * m + 2) / 5 + (365 * y) + (y / 4) - 32083);
}

int main() 
{
	scanf("%d:%d:%d %d:%d:%d", &y1, &m1, &d1, &y2, &m2, &d2);
	printf("%d\n", abs(julianDay(y2, m2, d2) - julianDay(y1, m1, d1)));
	return 0;
}