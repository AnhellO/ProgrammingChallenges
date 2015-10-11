#include <cstdio>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int n, m, i, sum1 = 0, sum2 = 0, val;

int main() 
{
	scanf("%d %d", &n, &m);
	FOR(i, 0, n, 1)
	{
		scanf("%d", &val);
		sum1 += val;
	}
	FOR(i, 0, m, 1)
	{
		scanf("%d", &val);
		sum2 += val;
	}
	printf((sum1 == sum2) ? "tie\n" : ((sum1 > sum2) ? "first win\n" : "second win\n"));
	return 0;
}