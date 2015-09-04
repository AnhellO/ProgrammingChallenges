#include <cstdio>
#include <cmath>
#define FOR(i, a, b, c) for(i = a ; i <= b ; i += c)
using namespace std;

int K, i, Li, Ls;

bool isPrime(int K)
{
	int i;
	if(K <= 2) return K == 2;
	FOR(i, 2, sqrt((double)K), 1)
		if(K % i == 0)
			return false;
	return true;
}

int main() 
{
	while(scanf("%d", &K) != EOF)
	{
		if(!K) break;
		Ls = Li = 0;
		i = K;
		while(!isPrime(i)) i--;
		Li = i;
		i = K;
		while(!isPrime(i)) i++;
		Ls = i;
		printf("%d\n", Ls - Li);
	}
	return 0;
}