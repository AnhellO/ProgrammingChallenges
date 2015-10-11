#include <cstdio>
#include <algorithm>
#define MAX 102
using namespace std;

int N, M, K, i, j, x, y, best = 0;
bool field[MAX][MAX] = {0};

int visit(int x, int y)
{
	int a = 1;
	field[x][y] = 0;
	if(field[x - 1][y]) a += visit(x - 1, y);
	if(field[x + 1][y]) a += visit(x + 1, y);
	if(field[x][y - 1]) a += visit(x, y - 1);
	if(field[x][y + 1]) a += visit(x, y + 1);
	return a;
}

int main()
{
	scanf("%d %d %d", &N, &M, &K);
	for(i = 0 ; i < K ; i++)
	{
		scanf("%d %d", &x, &y);
		field[x][y] = 1;
	}
	for(i = 0 ; i <= N ; i++)
		for(j = 0 ; j <= M ; j++)
			if(field[i][j])
				best = max(best, visit(i, j));
	printf("%d\n", best);
	return 0;
}