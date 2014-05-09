#include <cstdio>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int N, i;

int generateRandom(int n)
{
	return (n * 13821) % 32768;
}

int main() 
{
	scanf("%d", &N);
	FOR(i, 0, 10, 1)
	{
		N = generateRandom(N);
		printf("%d : %d\n", N, (((N + 1) % 7) == 0) ? 7 : (N + 1) % 7);
	}
	return 0;
}