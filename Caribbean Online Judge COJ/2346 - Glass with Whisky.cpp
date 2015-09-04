#include <cstdio>
#include <cmath>
using namespace std;

double R1, R2, H, h, newR;
double const PI = atan(1.0) * 4.0;

double calculateVolume(double h, double R1, double R2)
{
	return (1.0 / 3.0) * PI * h * (R2 * R2 + R1 * R1 + (R2 * R1));
}

int main() 
{
	while(scanf("%lf %lf %lf %lf", &R1, &R2, &H, &h) != EOF && (R1 && R2 && H && h))
	{
		newR = (h - H) * (R1 - R2) / -H + R2;
		printf("%.4lf\n", calculateVolume(H - h, newR, R2));
	}
	return 0;
}