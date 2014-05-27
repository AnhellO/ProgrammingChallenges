#include <cstdio>
using namespace std;

int T;
unsigned long long int N, aux = 1, perm = 2, mod = 1000000007;

int main() 
{
	scanf("%d", &T);
	while(T--)
	{
		scanf("%llu", &N);
		N--, aux = 1, perm = 2;
		while(N)
		{
			if(N & 1) aux = (aux * perm) % mod;
                	perm = (perm * perm) % mod;
                	N /= 2;
		}
		printf("%llu\n", aux);
	}
	return 0;
}
