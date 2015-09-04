#include <cstdio>
#include <utility>
#include <vector>
#include <algorithm>
#define W(T) while(T--)
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int T, N, i, subT, total;

struct predicate
{
	bool operator()(pair<int, int> left, pair<int, int> right)
	{
		return left.second > right.second;
	}
};

int main() 
{
	scanf("%d", &T);
	W(T)
	{
		scanf("%d", &N);
		subT = total = 0;
		vector<pair<int, int> > team(N);
		FOR(i, 0, N, 1) scanf("%d %d", &team[i].first, &team[i].second);
		sort(team.begin(), team.end(), predicate());
		FOR(i, 0, N, 1)
		{
			subT += team[i].first;
			total = max(total, subT + team[i].second);
		}
		printf("%d\n", total);
	}
	return 0;
}