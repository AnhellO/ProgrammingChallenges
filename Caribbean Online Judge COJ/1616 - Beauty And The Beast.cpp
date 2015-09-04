#include <cstdio>
using namespace std;
/*
* Author: Angel Santiago Jaime Zavala (AnhellO)
* Caribbean Online Judge COJ: 1616 - Beauty and the Beast
*
* Based on the next article: http://en.wikipedia.org/wiki/Clock_angle_problem
* Just be careful with times higher than 12:00, beacuse the formula consider a full clockwise rotation
* and start to sum from 360°. Validate at the end
*/
double h, m;

double getHoursAngle(double h, double m)
{
	return 0.5 * (60.0 * h + m);
}

double getMinutesAngle(double m)
{
	return 6.0 * m;
}

int main() 
{
	while(scanf("%lf:%lf", &h, &m) != EOF) //Check for the full rotation on the output
		printf("%.1lf %.1lf\n", (h >= 12.0) ? getHoursAngle(h, m) - 360.0 : getHoursAngle(h, m), getMinutesAngle(m));
	return 0;
}