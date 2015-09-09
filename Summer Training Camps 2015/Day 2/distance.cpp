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
#define MAX 102
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

//int tree[MAX][MAX];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    ifstream file("rootdist.in");
	if(file) freopen("rootdist.in", "rt", stdin);
	ofstream output("rootdist.out");
    int n, a;
    cin >> n;
    map<int, int> dist;
    dist[1] = 0;
    queue<int> q;
    q.push(1);
    vvii adjacency(n + 1) ;
    for(int i = 2 ; i <= n ; i++) {
        cin >> a;
        adjacency[i].push_back(make_pair(a, 1));
        adjacency[a].push_back(make_pair(i, 1));
    }
    while(!q.empty()) {
        int u = q.front();
        q.pop();
        for(int j = 0 ; j < adjacency[u].size() ; j++) {
            ii v = adjacency[u][j];
            if(!dist.count(v.first)) {
                dist[v.first] = dist[u] + 1;
                q.push(v.first);
            }
        }
    }
    int _max = 0, cont = 0;
    vi last;
    for(map<int, int>::iterator it = dist.begin() ; it != dist.end() ; ++it) {
        //cout << it->first << ' ' << it->second << '\n';
        if(it->second > _max) {
        	_max = it->second;
        }
    }
    for(map<int, int>::iterator it = dist.begin() ; it != dist.end() ; ++it) {
        //cout << it->first << ' ' << it->second << '\n';
        if(it->second == _max) {
        	cont++;
        	last.push_back(it->first);
        }
    }
    output << _max << '\n' << cont << '\n';
    output << last[0];
    for(int i = 1 ; i < last.size() ; i++) {
    	output << ' ' << last[i];
    }
    output << '\n';
    //output.close();
    return 0;
}
