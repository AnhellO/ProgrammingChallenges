#include <cstdio>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int T, N, i, tMin, maxi;

bool predicate(pair<int, int> const& lhs, pair<int, int> const& rhs) 
{
	if(lhs.first != rhs.first)
		return lhs.first < rhs.first;
	if(lhs.second != rhs.second)
		return lhs.second < rhs.second;
}

int main() 
{
	scanf("%d", &T);
	while(T--)
	{
		tMin = 0;
		scanf("%d", &N);
		if(!N) printf("%d\n", 0);
		else if(N == 1)
		{
			scanf("%d %d", &N, &i);
			printf("%d\n", i - N + 1);
		}
		else
		{
			vector<pair<int, int> > mins(N);
			for(i = 0 ; i < N ; i++) 
				scanf("%d %d", &mins[i].first, &mins[i].second);
			sort(mins.begin(), mins.end(), &predicate);
			tMin += ((mins[0].second - mins[0].first) + 1);
			maxi = mins[0].second;
			for(i = 1 ; i < N ; i++)
			{
				if(mins[i].first < maxi && mins[i].second < maxi) continue;
				else if(mins[i].first < maxi && mins[i].second > maxi)
				{
					tMin += (mins[i].second - maxi);
					maxi = mins[i].second;
				}
				else if(mins[i].first > maxi && mins[i].second > maxi)
				{
					tMin += ((mins[i].second - mins[i].first) + 1);
					maxi = mins[i].second;
				}
				//printf("%d %d\n", mins[i].first, mins[i].second);
			}
			printf("%d\n", tMin);
		}
	}
	return 0;
}