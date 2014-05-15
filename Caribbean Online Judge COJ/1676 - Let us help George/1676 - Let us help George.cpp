#include <cstdio>
#define FOR(i, a, b, c) for(i = a ; i <= b ; i += c)
using namespace std;

unsigned long long int N, i, diamonds, temp;

int main() 
{
	while(scanf("%llu", &N) != EOF)
	{
		if(!N) break;
		if(N == 1)
			printf("Case %llu:\nn = %llu, diamonds = %d\n", N, N, 1);
		else if(N == 2)
			printf("Case %llu:\nn = %llu, diamonds = %d\n", N, N, 5);
		else
		{
			temp = 0, diamonds = 0;
			FOR(i, 2, N, 1)
			{
				temp = i * i;
				diamonds += temp;
			}
			printf("Case %llu:\nn = %llu, diamonds = %llu\n", N, N, diamonds + 1);
		}
	}
	return 0;
}