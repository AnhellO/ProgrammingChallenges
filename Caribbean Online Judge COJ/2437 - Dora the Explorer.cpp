#include <cstdio>
#include <cmath>
using namespace std;

unsigned long long int n, res;

int main() 
{
	while(scanf("%llu", &n) != EOF)
	{
		if(!n) break;
		
		res = pow((2 * n), 0.5);
		while((res * (res + 1) / 2) >= n)
		{
			res -= 1;
		}
		
		n -= (res * (res + 1) / 2);
		res += 1;
		
		(res % 2 != 0) ? printf("%llu %llu\n", (res - n + 1), n) : printf("%llu %llu\n", n, (res - n + 1));
	}
	return 0;
}