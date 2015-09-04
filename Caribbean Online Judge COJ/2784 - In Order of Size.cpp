#include <cstdio>
#include <algorithm>
#define FOR(i, a, b, c) for(i = 0 ; i < b ; i += c)
using namespace std;

int N, i;

int main() 
{
	scanf("%d", &N);
	int gladiators[N];
	FOR(i, 0, N, 1)
		scanf("%d", &gladiators[i]);
	sort(gladiators, gladiators + N);
	printf("%d", gladiators[N - 1]);
	FOR(i, 0, N - 1, 1)
		printf(" %d", gladiators[i]);
	printf("\n");
	return 0;
}