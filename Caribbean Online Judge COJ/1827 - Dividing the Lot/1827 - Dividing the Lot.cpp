#include <cstdio>
#include <algorithm>
using namespace std;

int T, N, P, i, val, total;

int main() 
{
	scanf("%d", &T);
	while(T--)
	{
		total = 0;
		scanf("%d %d", &P, &N);
		int treasures[N];
		for(i = 0 ; i < N ; i++) scanf("%d", &treasures[i]);
		sort(treasures, treasures + N);
		val = N / (P + 1);
		i = N - 1;
		while(val--) 
		{
			total += treasures[i];
			i--;
		}
		printf("%d\n", total);
	}
	return 0;
}