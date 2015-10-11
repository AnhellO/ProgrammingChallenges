#include <cstdio>
#include <cstring>
#include <string>
#include <queue>
#include <algorithm>
#define MAX 31
using namespace std;

struct Route
{
    int x, y, d;
    Route(int x1 , int y1 , int d1) : x(x1), y(y1), d(d1){ }
    Route(){}
};
char ady[MAX][MAX];
Route p[MAX][MAX]; 
bool visited[MAX][MAX];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};
int n, r, c, i, j;
string caps = "#ABCDEFGHIJKLMNÑOPQRSTUVWXYZ";

bool bfs(int x, int y, int H, int W)
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
       	if(ady[actual.x][actual.y] == 'g') return true;
       	visited[actual.x][actual.y] = true;
       	for(i = 0 ; i < 4 ; i++)
       	{
          	int nx = dx[i] + actual.x;
          	int ny = dy[i] + actual.y;
          	if(nx >= 0 && nx < H && ny >= 0 && ny < W && !visited[nx][ny] && !binary_search(caps.begin(), caps.end(), ady[nx][ny]))
          	{
             	Route adyacent(nx, ny, actual.d + 1);
             	Q.push(adyacent);
             	p[nx][ny] = actual;
          	}
       }
    }
    return false;
}

int main()
{
	int x, y;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d %d", &r, &c);
		for(i = 0 ; i < r ; i++)
		{
			for(j = 0 ; j < c ; j++)
			{
				scanf(" %c", &ady[i][j]);
				if(ady[i][j] == 'b')
				{
					x = i;
					y = j;
				}
			}
		}
		printf((bfs(x, y, r, c)) ? "Good\n" : "Bad\n");
	}
	return 0;
}