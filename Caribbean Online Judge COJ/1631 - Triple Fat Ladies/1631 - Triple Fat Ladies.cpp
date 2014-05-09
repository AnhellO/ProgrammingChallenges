#include <cstdio>
#define W(T) while(T--)
using namespace std;

unsigned long long int N, K;

int main() 
{
	scanf("%llu", &N);
	W(N)
	{
		scanf("%llu", &K);
		printf("%llu\n", 192 + (K - 1) * 250);
	}
	return 0;
}