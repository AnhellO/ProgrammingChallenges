#include <cstdio>
using namespace std;

int T, N, K, cont = 0, limit, i;

int main()
{
	scanf("%d %d", &N, &K);
	int scores[N];
	for(i = 0 ; i < N ; i++)
	{
		scanf("%d", &scores[i]);
		if(i + 1 == K) limit = scores[i];
	}
	for(i = 0 ; i < N ; i++)
		if(scores[i] >= limit && scores[i] > 0)
			cont++;
	printf("%d\n", cont);
	return 0;
}