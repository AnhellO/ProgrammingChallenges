#include <cstdio>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int N, i, val;
double sum = 0.0;

int main() 
{
	scanf("%d", &N);
	FOR(i, 0, N, 1)
	{
		scanf("%d", &val);
		sum += val;
	}
	printf("%.2lf\n", sum / N);
	return 0;
}