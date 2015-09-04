#include <cstdio>
#include <cstring>
#include <queue>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
#define MAX 100
using namespace std;

struct Route
{
    int x, y, d;
    Route(int x1 , int y1 , int d1) : x(x1), y(y1), d(d1){}
    Route(){}
};

int N, i, j;
char ady[MAX][MAX];
Route p[MAX][MAX]; 
bool visited[MAX][MAX];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int bfs(int x, int y, int H, int W)
{
    	int i;
    	Route beginning(x, y, 0);
    	queue<Route> Q;
    	Q.push(beginning);
    	memset(visited, false, sizeof(visited));
    	p[x][y] = Route(-1 , -1, -1);
    	while(!Q.empty())
    	{ 
    		Route actual = Q.front();
       		Q.pop();
       		if(ady[actual.x][actual.y] == '#') return actual.d;
       		visited[actual.x][actual.y] = true;
       		for(i = 0 ; i < 4 ; i++)
       		{
          		int nx = dx[i] + actual.x;
          		int ny = dy[i] + actual.y;
          		if(nx >= 0 && nx < H && ny >= 0 && ny < W && ady[nx][ny] != '*' && !visited[nx][ny])
          		{
             			Route adyacent(nx, ny, actual.d + 1);
             			Q.push(adyacent);
             			p[nx][ny] = actual;
          		}
       		}
    	}
    	return -1;
}

int main() 
{
	int x, y;
	scanf("%d", &N);
	FOR(i, 0, N, 1)
	{
		FOR(j, 0, N, 1)
		{
			scanf(" %c", &ady[i][j]);
			if(ady[i][j] == 'm')
			{
				x = i;
				y = j;
			}
		}
	}
	int min = bfs(x, y, N, N);
	printf("%d\n", min);
	return 0;
}
