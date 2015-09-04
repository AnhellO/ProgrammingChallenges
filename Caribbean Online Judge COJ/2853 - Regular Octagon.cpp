#include <cstdio>
#include <cmath>
using namespace std;

double c, l;
double const PI = atan(1.0) * 4.0;

int main() 
{
	while(scanf("%lf", &c) != EOF && c)
	{
		l = (sqrt(2.0) - 1.0) * c;
		printf("%.3lf\n", (2 * (l * l)) * (1.0 + sqrt(2.0)));
	}
	return 0;
}