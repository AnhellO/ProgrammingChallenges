#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <cstdlib>
#include <cctype>
#include <bitset>
#include <sstream>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <iomanip>
#include <utility>
#include <fstream>
#define INF 1000000000000
#define MAX 1000000
using namespace std;

typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef vector<int> vi;
typedef vector<vi> vivi;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef vector<vii> vvii;
typedef map<int, int> mii;
typedef map<char, int> mci;
typedef map<string, int> msi;
typedef map<int, ii> miii;

queue<int> q;
mii dist;
bool isBipartite = true;
vi vis;
//int visit;

void bfs(vvii &adj, int s) {
    q.push(s);
    dist[s] = 0;
    while(!q.empty()) {
        int u = q.front();
        //visit &= ~(1<<(u-1)); // visitado bitmask
        vis[u] = 1; // visitado
        q.pop();
        for(int j = 0 ; j < adj[u].size() ; j++) {
            ii v = adj[u][j];
            if(!dist.count(v.first)) {
                dist[v.first] = 1 - dist[u];
                q.push(v.first);
            } else if(dist[v.first] == dist[u]) {
                isBipartite = false;
            }
        }
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    ifstream file("bipartite.in");
	if(file) freopen("bipartite.in", "rt", stdin);
	ofstream output("bipartite.out");
    int n, m, a, b;
    cin >> n >> m;
    vvii adj(n + 1);
    vis.assign(n + 1, 0);
    //visit = (1 << n) -1;
    for(int i = 0 ; i < m ; i++) {
        cin >> a >> b;
        adj[a].push_back(make_pair(b, 1));
        adj[b].push_back(make_pair(a, 1));
    }
    int last = 1;
    while(dist.size() < n) {
        bfs(adj, last/*log2(visit & (-visit))+1*/);
        for(int i = last+1 ; i <= n ; i++ ){
            if(!vis[i]){
                last = i;
                break;
            }
        }
    }
    //bfs(adj, last);

    /*for(map<int, int>::iterator it = dist.begin() ; it != dist.end() ; ++it) {
        output << it->first << ' ' << it->second << '\n';
    }*/
    output << ((isBipartite) ? "YES\n" : "NO\n");
    if(isBipartite) {
        map<int, int>::iterator it = dist.begin();
        output << ((!it->second) ? "1" : "2");
        ++it;
        for(; it != dist.end() ; ++it) {
            output << ((!it->second) ? " 1" : " 2");
            //output << it->first << ' ' << it->second << '\n';
        }
        output << '\n';
    }
    output.close();
    return 0;
}

