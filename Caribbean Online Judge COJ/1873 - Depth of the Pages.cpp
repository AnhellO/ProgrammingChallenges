#include <cstdio>
#include <vector>
#include <queue>
#define Node pair<int, int>
#define MAX 51
using namespace std;
 
struct cmp 
{
    bool operator()(const Node &a, const Node &b) 
    {
        return a.second > b.second;
    }
};
 
int T, N, L, queries, S, D, q, i;
vector<Node> vertex[MAX];
int dist[MAX];
bool visited[MAX];
priority_queue<Node, vector<Node>, cmp > Q;
int prev[MAX];  
 
void init()
{
    int i;
    for(i = 0 ; i <= N ; i++)
    {
        dist[i] = MAX;
        visited[i] = false;
        prev[i] = -1;
    }
}
 
void state(int actual, int next, int weight)
{
    if(dist[actual] + weight < dist[next])
    {
        dist[next] = dist[actual] + weight;
        prev[next] = actual;
        Q.push(Node(next, dist[next]));
    }
}
 
void dijkstra(int a)
{
    init();
    int i;
    Q.push(Node(a, 0));
    dist[a] = 0;
    int actual, next, weight;
    while(!Q.empty())
    {
        actual = Q.top().first;
        Q.pop();
        if(visited[actual]) continue;
        visited[actual] = true;
        for(i = 0 ; i < vertex[actual].size() ; i++)
        {
            next = vertex[actual][i].first;
            weight = vertex[actual][i].second;
            if(!visited[next])
            {
                state(actual, next, weight);
            }
        }
    }
}
 
int main() 
{
	scanf("%d", &T);
	while(T--)
	{
		scanf("%d %d %d", &N, &L, &queries);
		for(i = 0 ; i <= N ; i++) 
		{
			vertex[i].clear();
		}
		while(L--)
		{
			scanf("%d %d", &S, &D);
			vertex[S].push_back(Node(D , 1));
		}
		while(queries--)
		{
			scanf("%d", &q);
			if(q == 1) printf("1\n");
			else
			{
				dijkstra(1);
				printf("%d\n", (dist[q] < 50) ? dist[q] + 1 : -1);
			}
		}
	}
	return 0;
}
