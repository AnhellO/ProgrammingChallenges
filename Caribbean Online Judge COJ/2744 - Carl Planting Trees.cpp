#include <cstdio>
#include <vector>
#include <algorithm>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int N, i, j, cont = 0, may = 0;

int main() 
{
	scanf("%d", &N);
	vector<int> trees(N);
	FOR(i, 0, N, 1)
		scanf("%d", &trees[i]);
	sort(trees.rbegin(), trees.rend());
	FOR(i, 0, N, 1)
		if(trees[i] + i + 2 > may) may = trees[i] + i + 2;
	printf("%d\n", may);
	return 0;
}