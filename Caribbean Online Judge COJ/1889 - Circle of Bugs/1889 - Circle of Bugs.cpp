#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;

int N, i, cont = 0;
double P = 0.0;
double const pi = atan(1) * 4;

int main() 
{
	scanf("%d", &N);
	double bugs[N];
	for(i = 0 ; i < N ; i++) scanf("%lf", &bugs[i]);
	sort(bugs, + bugs + N);
	for(i = N - 1 ; i >= 0 ; i--)
	{
		if(cont == 10) break;
		else cont++;
		P += bugs[i];
	}
	printf("%.4lf\n", P / (2.0 * pi));
	return 0;
}