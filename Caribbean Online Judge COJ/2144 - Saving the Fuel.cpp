#include <cstdio>
#include <algorithm>
#define W(T) while(T--)
#define FOR1(i, a, b, c) for(i = a ; i < b ; i += c)
#define FOR2(i, a, b, c) for(i = a ; i >= b ; i -= c)
using namespace std;

int nCases, N, D, i, tWeight;
char highway[9];

int main() 
{
	scanf("%d", &nCases);
	W(nCases)
	{
		scanf("%d %d %s", &N, &D, &highway);
		int sacks[N];
		tWeight = 0;
		FOR1(i, 0, N, 1)
			scanf("%d", &sacks[i]);
		sort(sacks, sacks + N);
		if(highway[0] == 'r')
			FOR2(i, N - 1, N - D, 1)
				tWeight += sacks[i];
		else
			FOR1(i, 0, D, 1)
				tWeight += sacks[i];
		printf("%d\n", tWeight);
	}
	return 0;
}