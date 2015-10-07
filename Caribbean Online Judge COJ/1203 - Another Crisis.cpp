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
typedef vector<string> vs;
typedef vector<vi> vvi;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef vector<vii> vvii;
typedef map<int, int> mii;
typedef map<char, int> mci;
typedef map<string, int> msi;
typedef map<int, ii> miii;
typedef map<string, string> mss;
typedef map<string, vs> msvs;
typedef long long int lli;
typedef unsigned long long int ulli;

int dfs(vvi &adj, int N, int T, int node) {
	if(!adj[node].size()) {
		return 1;
	}
	vi emp;
	//cout << adj[node].size() << ' ';
	for(int i = 0 ; i < adj[node].size() ; i++) {
		emp.push_back(dfs(adj, N, T, adj[node][i]));
	}
	//cout << emp.size() << ' ';
	sort(emp.begin(), emp.end());
	int must = (int)ceil(adj[node].size() * T / 100.0);
	//cout << must << ' ';
	int total = 0;
	for(int i = 0 ; i < must ; i++) {
		total += emp[i];
	}
	return total;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int N, T;
	while(cin >> N >> T && (N && T)) {
		vvi adj(N + 1);
		for(int i = 1 ; i <= N ; i++) {
			int boss;
			cin >> boss;
			adj[boss].push_back(i);
		}
		/*for(int i = 0 ; i < adj.size() ; i++) {
			cout << "Father: " << i << ", Sons:\n";
			for(int j = 0 ; j < adj[i].size() ; j++) {
				cout << adj[i][j] << '\n';
			}
		}*/
		cout << dfs(adj, N, T, 0) << '\n';
	}
	return 0;
}