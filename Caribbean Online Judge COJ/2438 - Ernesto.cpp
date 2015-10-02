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

msi visited;
set<string> c;

void dfs(map<string, vector<string> > &adj, msi &st, pair<string, int> &_max, string node) {
	visited[node] = 1;
	for(int i = 0 ; i < adj[node].size() ; i++) {
		if(!visited[adj[node][i]]) {
			dfs(adj, st, _max, adj[node][i]);
		}
	}
	if(st[node] > _max.second) {
		_max.first = node;
		_max.second = st[node];
	}
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int N, M;
	while(cin >> N >> M && (N && M)) {
		map<string, vector<string> > adj;
		msi st;
		visited.clear();
		c.clear();
		for(int i = 0 ; i < N ; i++) {
			string s;
			int T;
			cin >> s >> T;
			st[s] = T;
			visited[s] = 0;
			adj[s];
		}
		for(int i = 0 ; i < M ; i++) {
			string A, B;
			cin >> A >> B;
			adj[A].push_back(B);
			adj[B].push_back(A);
		}
		for(map<string, vector<string> >::iterator it = adj.begin() ; it != adj.end() ; ++it) {
			pair<string, int> _max;
			if(!visited[it->first]) {
				_max = make_pair(it->first, st[it->first]);
				dfs(adj, st, _max, it->first);
				c.insert(_max.first);
			}
		}
		for(set<string>::iterator it = c.begin() ; it != c.end() ; ++it) {
			cout << *it << '\n';
		}
	}
	return 0;
}