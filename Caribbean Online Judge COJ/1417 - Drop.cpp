#include <cstdio>
using namespace std;

double n;
int i;

int main()
{
	while(scanf("%lf", &n) && n)
	{
		printf("Starting height: %.5lf meter(s)\n", n);
		for(i = 1 ; n >= 0.001 ; i++)
		{
			n /= 2.0;
			printf("Bounce #%d: %.10lf meters\n", i, n);
		}
		printf("\n");
	}
	return 0;
}