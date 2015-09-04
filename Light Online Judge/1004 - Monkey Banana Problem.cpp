#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

bool flag;
int T, N, i, j, k, cont, val;
 
int main()
{
	scanf("%d", &T);
	for(k = 1 ; k <= T ; k++)
	{
		scanf("%d", &N);
		vector<vector<int> > chamber(N * 2 - 1), dp(N * 2 - 1);
		cont = flag = 1;
		for(i = 0 ; i < N * 2 - 1 ; i++)
		{
			for(j = 0 ; j < cont ; j++)
			{
				scanf("%d", &val);
				chamber[i].push_back(val);
				if(!i) dp[i].push_back(val);
				else dp[i].push_back(0);
			}
			if(cont < N && flag) cont++;
			else if(cont == N && flag) cont--, flag = false;
			else cont--;
		}
		cont = flag = 1;
		for(i = 0 ; i < N * 2 - 2 ; i++)
		{
			for(j = 0 ; j < cont ; j++)
			{
				if(cont < N && flag)
				{
					dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i][j] + chamber[i + 1][j + 1]);
					dp[i + 1][j] = max(dp[i + 1][j], dp[i][j] + chamber[i + 1][j]);
				}
				else
				{
					if(j - 1 > -1) dp[i + 1][j - 1] = max(dp[i + 1][j - 1], dp[i][j] + chamber[i + 1][j - 1]);
					if(j <= chamber[i + 1].size()) dp[i + 1][j] = max(dp[i + 1][j], dp[i][j] + chamber[i + 1][j]);
				}
			}
			if(cont < N && flag) cont++;
			else if(cont == N && flag) cont--, flag = false;
			else cont--;
		}
		printf("Case %d: %d\n", k, dp[chamber.size() - 1][0]);
	}
	return 0;
}
