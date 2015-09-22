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
#include <functional>
#define INF 1000000000000
#define MAX 1000000
#define MOD 10000007
#define len(arr) (sizeof(arr)/sizeof(arr[0]))
#define for_each(type, it, cont) for(type::iterator it = cont.begin() ; it != cont.end() ; ++it)
using namespace std;

typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef vector<int> vi;
typedef vector<vi> vvi;
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

void bfs(vvii &adj, int s) {
	q.push(s);
	dist[s] = 0;
	while(!q.empty()) {
		int u = q.front();
		vis[u] = 1;
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
	int n, m, a, b;
	cin >> n >> m;
	vvii adj(n + 1);
	vis.assign(n + 1, 0);
	for(int i = 0 ; i < m ; i++) {
		cin >> a >> b;
		adj[a].push_back(make_pair(b, 1));
		adj[b].push_back(make_pair(a, 1));
	}
	int last = 1;
	while(dist.size() < n) {
		bfs(adj, last);
		for(int i = last+1 ; i <= n ; i++ ){
			if(!vis[i]){
				last = i;
				break;
			}
		}
	}
	cout << ((isBipartite) ? "YES\n" : "NO\n");
	return 0;
}
