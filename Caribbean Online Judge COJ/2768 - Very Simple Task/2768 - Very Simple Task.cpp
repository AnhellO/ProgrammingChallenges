#include <cstdio>
using namespace std;

long long int N, MOD = 1000000007;

long long int power(long long int A, long long int B)
{
	if(!B) return 1;
	else
	{
		long long int aux = power(A, B / 2);
		aux = (aux * aux) % MOD;
		return (B % 2) ? (aux * A) % MOD : aux;
	}
}

int main()
{
	while(scanf("%lld", &N) && N) printf("%lld\n", power(2, N + 1) - 1);
	return 0;
}