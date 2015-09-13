//Not Accepted: WA

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
#define MAX 10001
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

const int DFS_WHITE = -1, DFS_BLACK = 1;
vi steps(101, MAX);
vi dfs_num;
mii dist;
int cont = 0;

void dfs(int u, vvii adjacency) {
    dfs_num[u] = DFS_BLACK;
    for(int j = 0 ; j < adjacency[u].size() ; j++) {
        ii v = adjacency[u][j];
        if(dfs_num[v.first] == DFS_WHITE) {
            dist[v.first] = dist[u] + 1;
            //cout << dist[v.first] << ' ';
            dfs(v.first, adjacency);
        } else {
        	//cout << dist[u] << ' ' << dist[v.first] << '\n';
            if(abs(dist[u] - dist[v.first]) == 2) {
                cont++;
            }
        }
    }
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    ifstream file("triangles.in");
	if(file) freopen("triangles.in", "rt", stdin);
	ofstream output("triangles.out");
    int n, m, a, b;
    cin >> n >> m;
    vvii adjacency(n + 1);
    dfs_num.assign(n + 1, -1);
    dist[1] = 0;
    for(int i = 0 ; i < m  ; i++) {
        cin >> a >> b;
        adjacency[a].push_back(make_pair(b, 1));
        adjacency[b].push_back(make_pair(a, 1));
    }
    dfs(1, adjacency);
    output << cont / 2 << '\n';
    output.close();
    return 0;
}
