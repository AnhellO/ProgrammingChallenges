#include <cstdio>
#include <algorithm>
#include <functional>
using namespace std;

int N, i, j, cont = 0, sum1 = 0, sum2 = 0;

int main()
{
	scanf("%d", &N);
	int coins[N];
	for(i = 0 ; i < N ; i++) scanf("%d", &coins[i]);
	sort(coins, coins + N, greater<int>());
	for(i = 0 ; i < N ; i++)
	{
		sum1 += coins[i];
		cont++;
		sum2 = 0;
		for(j = N - 1 ; j > i ; j--)
		{
			sum2 += coins[j];
			if(sum2 >= sum1) break;
		}
		if(sum1 > sum2) break;
	}
	printf("%d\n", cont);
	return 0;
}