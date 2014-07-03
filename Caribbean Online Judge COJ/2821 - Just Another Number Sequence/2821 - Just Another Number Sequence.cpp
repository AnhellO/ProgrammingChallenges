#include <cstdio>
using namespace std;

int T;
long long int N, X, MOD = 1000000007;

long long int multiply(long long int A, long long int B)
{
	return ((A % MOD) * (B % MOD)) % MOD;
}

long long int power(long long int A, long long int B)
{
	long long int result = 1;
	while(B)
	{
		if(B & 1) result = multiply(result, A);
		A = multiply(A, A);
		B >>= 1;
	}
	return result;
}

long long int solve(long long int N, long long int X)
{
	long long int result;
	if(X == 1) result = multiply(multiply(N, N + 1), power(2, MOD - 2));
	else
	{
		result = multiply(N, power(X, N + 2)) - multiply((N + 1), power(X, N + 1)) + X;
        result %= MOD;
        if(result < 0) result += MOD;
        result *= power(multiply((X - 1), (X - 1)), MOD - 2);
        result %= MOD;
	}
	return result;
}

int main()
{
	scanf("%d", &T);
	while(T--)
	{
		scanf("%lld %lld", &N, &X);
		printf("%lld\n", solve(N, X));
	}
	return 0;
}