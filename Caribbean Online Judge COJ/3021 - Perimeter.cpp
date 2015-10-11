#include <cstdio>
#define MAX 102
using namespace std;

int N, i, x, y, perimeter;
bool field[MAX][MAX] = {0}, visited[MAX][MAX] = {0};

int valid(int x, int y)
{
	return x >= 0 && x < MAX && y >= 0 && y < MAX;
}

void visit(int x, int y)
{
	if(field[x][y])
	{
		perimeter++;
		return;
	}
	if(visited[x][y]) return;
	visited[x][y] = 1;
	if(valid(x - 1, y)) visit(x - 1, y);
	if(valid(x + 1, y)) visit(x + 1, y);
	if(valid(x, y - 1)) visit(x, y - 1);
	if(valid(x, y + 1)) visit(x, y + 1);
}

int main()
{
	scanf("%d", &N);
	for(i = 0 ; i < N ; i++)
	{
		scanf("%d %d", &x, &y);
		field[x][y] = 1;
	}
	visit(0, 0);
	printf("%d\n", perimeter);
	return 0;
}