#include <cstdio>
#include <cmath>
using namespace std;

int a, b, nCase = 0, rows, count, sqroot;
long n;

int main()
{
	while(scanf("%d %d", &a, &b) && (a && b))
	{
		rows = sqrt(2 * a);
		n = (rows * (rows + 1)) / 2 + 1;
		while(n <= a) n += ++rows;
		count = 0;
		while(n < b)
		{
			sqroot = sqrt(n);
			if(sqroot * sqroot == n) count++;
			n += ++rows;
		}
		printf("Case %d: %d\n", ++nCase, count);
	}
}