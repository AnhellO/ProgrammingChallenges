#include <cstdio>
#include <algorithm>
#include <numeric> 
#define W(T) while(T--)
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int T, N, i, sum;

int main() 
{
	scanf("%d", &T);
	W(T)
	{
		scanf("%d", &N);
		int stones[N];
		sum = 0;
		FOR(i, 0, N, 1)
			scanf("%d", &stones[i]);
		sort(stones, stones + N);
		FOR(i, 0, N - 1, 1)
			sum += stones[i];
		printf("%d\n", sum);
	}
	return 0;
}