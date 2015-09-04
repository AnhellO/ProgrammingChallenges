#include <cstdio>
#include <algorithm>
#define MAX 105
using namespace std;

int T, h, w, i, j, nStones, matrix[MAX][MAX], dp[MAX][MAX];

void clean()
{
	int i, j;
	for(i = 0 ; i <= h ; i++)
		for(j = 0 ; j <= w ; j++)
			dp[i][j] = 0;
}

int main()
{
	scanf("%d", &T);
	while(T--)
	{
		scanf("%d %d", &h, &w);
		clean();
		for(i = 0 ; i < h ; i++)
		{
			for(j = 0 ; j < w ; j++)
			{
				scanf("%d", &matrix[i][j]);
				if(!i) dp[i][j] = matrix[i][j];
			}
		}
		for(i = 0 ; i < h ; i++)
		{
			for(j = 0 ; j < w ; j++)
			{
				if(j - 1 > -1) dp[i + 1][j - 1] = max(dp[i + 1][j - 1], dp[i][j] + matrix[i + 1][j - 1]);
				if(j + 1 < w) dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i][j] + matrix[i + 1][j + 1]);
				dp[i + 1][j] = max(dp[i + 1][j], dp[i][j] + matrix[i + 1][j]);
			}
		}
		nStones = 0;
		for(i = 0 ; i < w ; i++)
			nStones = max(nStones, dp[h - 1][i]);
		printf("%d\n", nStones);
	}
	return 0;
}