#include <bits/stdc++.h>
using namespace std;

double r;
double const pi = atan(1.0) * 4.0;

int main()
{
	scanf("%lf", &r);
	printf("%.6lf\n%.6lf\n", pi * (r * r), 2.0 * (r * r));
	return 0;
}