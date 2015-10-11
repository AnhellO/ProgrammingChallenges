#include <cstdio>
using namespace std;

int n;
double v1, v2, d;

int main() 
{
	scanf("%d", &n);
	while(n--)
	{
		scanf("%lf %lf %lf", &v1, &v2, &d);
		printf("%.4lf\n", d / (v1 + v2));
	}
	return 0;
}