#include <cstdio>
using namespace std;

int N, i, cont, tComp;

struct dateComp
{
	int d, m, y, c;	
};

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
	while(scanf("%d", &N) != EOF && N)
	{
		dateComp dates[N];
		cont = tComp = 0;
		for(i = 0 ; i < N ; i++) scanf("%d %d %d %d", &dates[i].d, &dates[i].m, &dates[i].y, &dates[i].c);
		for(i = 1 ; i < N ; i++)
		{
			if(julianDay(dates[i].y, dates[i].m, dates[i].d) - julianDay(dates[i - 1].y, dates[i - 1].m, dates[i - 1].d) == 1)
			{
				cont++;
				tComp += (dates[i].c - dates[i - 1].c);
			}
		}
		printf("%d %d\n", cont, tComp);
	}
	return 0;
}
