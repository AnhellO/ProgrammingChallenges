#include <bits/stdc++.h>
using namespace std;

char c1, c2;
double n1, n2;
const double e = 2.718281828;

double humidex(double t, double d)
{
	double power = 5417.7530 * (1.0 / 273.16 - 1.0 / (d + 273.16));
	double calc = pow(e, power);
	return t + 0.5555 * (6.11 * calc - 10.0);
}

double temperature(double h, double d)
{
	double power = 5417.7530 * (1.0 / 273.16 - 1.0 / (d + 273.16));
	double calc = pow(e, power);
	return h - 0.5555 * (6.11 * calc - 10.0);
}

double dew(double h, double t)
{
	return (1.0 / (1.0 / 273.16 - log(((h - t)/ 0.5555 + 10.0) / 6.11) / 5417.7530) - 273.16);
}

int main()
{
	while(scanf("%c", &c1))
	{
		if(c1 == 'E') break;
		scanf("%lf %c %lf", &n1, &c2, &n2);
		if(c1 == 'T' && c2 == 'D') printf("T %.1lf D %.1lf H %.1lf\n", n1, n2, humidex(n1, n2));
		else if(c1 == 'D' && c2 == 'T') printf("T %.1lf D %.1lf H %.1lf\n", n2, n1, humidex(n2, n1));
		else if(c1 == 'H' && c2 == 'D') printf("T %.1lf D %.1lf H %.1lf\n", temperature(n1, n2), n1, n2);
		else if(c1 == 'D' && c2 == 'H') printf("T %.1lf D %.1lf H %.1lf\n", temperature(n2, n1), n1, n2);
		else if(c1 == 'T' && c2 == 'H') printf("T %.1lf D %.1lf H %.1lf\n", n1, dew(n2, n1), n2);
		else if(c1 == 'H' && c2 == 'T') printf("T %.1lf D %.1lf H %.1lf\n", n2, dew(n1, n2), n1);
	}
	return 0;
}