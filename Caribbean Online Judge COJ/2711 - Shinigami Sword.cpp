#include <cstdio>
#include <utility>
#include <vector>
#include <algorithm>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

struct sort_pred 
{
    bool operator()(const std::pair<int,int> &left, const std::pair<int,int> &right) 
    {
        return left.second < right.second;
    }
};
int n, i, val;
vector< pair<int, int> > rank;

int main()
{
	scanf("%d", &n);
	FOR(i, 0, n, 1)
	{
		scanf("%d", &val);
		rank.push_back(make_pair(i + 1, val));
	}
	sort(rank.rbegin(), rank.rend(), sort_pred());
	FOR(i, 0, n, 1)
	{
		printf("%d\n", rank[i].first);
	}
	return 0;
}