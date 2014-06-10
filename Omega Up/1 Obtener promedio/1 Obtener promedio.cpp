#include <cstdio>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int n, i, val;
double sum = 0.0;

int main()
{
	scanf("%d", &n);
	FOR(i, 0, n, 1)
	{
		scanf("%d", &val);
		sum += val;
	}
	printf("%.2lf\n", sum / n);
	return 0;
}