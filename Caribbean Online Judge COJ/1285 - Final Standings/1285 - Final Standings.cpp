#include <cstdio>
#include <utility>
#include <vector>
#include <algorithm>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

struct predicate
{
    bool operator()(const std::pair<int, int> &left, const std::pair<int, int> &right) 
    {
         return left.second < right.second;
    }
};
int n, i, id, val;
vector< pair<int, int> > rank;

int main() 
{
	scanf("%d", &n);
	FOR(i, 0, n, 1)
	{
		scanf("%d %d", &id, &val);
		rank.push_back(make_pair(id, val));
	}
	stable_sort(rank.rbegin(), rank.rend(), predicate());
	FOR(i, 0, n, 1)
	{
		printf("%d %d\n", rank[i].first, rank[i].second);
	}
	return 0;
}