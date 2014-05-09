#include <cstdio>
using namespace std;

unsigned long long int N, sum = 0, mod = 1000000007;

unsigned long long int gauss(unsigned long long int n)
{
    return (n * (n + 1) * (2 * n + 1)) / 6;
}

int main() 
{
	while(scanf("%llu", &N) != EOF)
	{
		printf("%llu\n", gauss(N) % mod);
	}
	return 0;
}