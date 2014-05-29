#include <cstdio>
#include <algorithm>
using namespace std;

int T, N, i, j, cont, tRopes;

int main() 
{
	scanf("%d", &T);
	while(T--)
	{
		scanf("%d", &N);
		int ropes[N + 1];
		for(i = 0 ; i < N ; i++) scanf("%d", &ropes[i]);
		ropes[N] = -10000;
		sort(ropes, ropes + N);
		tRopes = 0;
		for(i = 0 ; i < N ; i++)
		{
			if(i) if(ropes[i] == ropes[i - 1]) continue;
			cont = 0;
			for(j = i ; j < N ; j++)
			{
				cont += ropes[i];
			}
			//printf("%d ", cont);
			if(cont > tRopes) tRopes = cont;
		}
		printf("%d\n", tRopes);
	}
	return 0;
}