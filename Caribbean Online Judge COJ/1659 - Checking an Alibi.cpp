#include <cstdio>
#include <cstring>
#include <algorithm>
#define MAX 1007
#define inf 0x3f3f3f
using namespace std;

int F, P, C, M, F1, F2, W, i, dis[MAX], vis[MAX], g[MAX][MAX], s[MAX], guilties[MAX];

void init()
{
    int i, j;
    for(i = 0 ; i <= F ; i++)
        for(j = 0 ; j <= F ; j++)
            if(i != j) g[i][j] = inf;
            else g[i][j] = 0;
}
 
void dijkstra(int s)
{
    int pos, minn, i, j;
    for(i = 0 ; i <= F ; i++) dis[i] = g[s][i];
    memset(vis, 0, sizeof(vis));
    dis[s] = 0, vis[s] = 1;
    for(i = 1 ; i < F ; i++)
    {
        pos =- 1, minn = inf;
        for(j = 1 ; j <= F ; j++)
            if(!vis[j] && minn > dis[j])
                minn = dis[j], pos = j;
        vis[pos] = 1;
        for(j = 1 ; j <= F ; j++)
            if(!vis[j] && dis[j] > g[pos][j] + minn)
                dis[j] = g[pos][j] + minn;
    }
}

int main()
{
    scanf("%d %d %d %d", &F, &P, &C, &M);
    init();
    while(P--)
    {
        scanf("%d %d %d", &F1, &F2, &W);
        if(g[F1][F2] > W) g[F1][F2] = g[F2][F1] = W;
    }
    dijkstra(1);
    P = 0;
    for(i = 1 ; i <= C ; i++)
    {
        scanf("%d", &guilties[i]);
        if(dis[guilties[i]] <= M) P++;
    }
    printf("%d\n", P);
    for(i = 1 ; i <= C ; i++)
        if(dis[guilties[i]] <= M) printf("%d\n", i);
    return 0;
}