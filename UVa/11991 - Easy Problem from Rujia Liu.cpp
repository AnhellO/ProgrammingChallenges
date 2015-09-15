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
#define MAX 100002
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

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    /*ifstream file("a.in");if(file)
    freopen("a.in", "rt", stdin);
    ofstream output("a.out");
    output.close();*/
    int n, m;
    while(cin >> n >> m) {
    	map<int, vector<int> > adj;
    	for(int i = 1 ; i <= n ; i++) {
    		int o;
    		cin >> o;
    		adj[o].push_back(i);
    	}
    	/*for(int i = 1 ; i <= n ; i++) {
    		for(int j = 0 ; j < adj[i].size() ; j++) {
    			cout << adj[i][j] << ' ';
    		}
    		cout << '\n';
    	}*/
    	for(int i = 1 ; i <= m ; i++) {
    		int k, v, o;
    		cin >> k >> v;
    		if(k > adj[v].size()) {
    			cout << "0\n";
    		} else {
    			cout << adj[v][k - 1] << '\n';
    		}
    	}
    }
    return 0;
}
