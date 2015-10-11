#include <cstdio>
using namespace std;

double M, K;

int main() 
{
	scanf("%lf %lf", &M, &K);
	printf("%.5lf\n", (M * 5.0 - K * 5.0 ) / 2.0);
	return 0;
}