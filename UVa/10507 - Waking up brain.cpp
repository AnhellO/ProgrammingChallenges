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
typedef map<int, set<int> > misi;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	/*ifstream file("a.in");if(file)
	freopen("a.in", "rt", stdin);
	ofstream output("a.out");
	output.close();*/
	int N, M;
	string awake, s;
	while(cin >> N) {
		int n = 0;
		cin >> M >> awake;
		misi adj;
		mii visited;
		visited[awake[0]] = 1;
		visited[awake[1]] = 1;
		visited[awake[2]] = 1;
		set<int> aux;
		aux.insert(awake[0]);
		aux.insert(awake[1]);
		aux.insert(awake[2]);
		for(int i = 0 ; i < M ; i++) {
			cin >> s;
			adj[s[0]].insert(s[1]);
			adj[s[1]].insert(s[0]);
		}
		/*for(misi::iterator it = adj.begin() ; it != adj.end() ; ++it) {
			for(set<int>::iterator it2 = it->second.begin() ; it2 != it->second.end() ; ++it2) {
				cout << it->first << ' ' << *it2 << '\n';
			}
		}*/
		bool flag = false;
		while(true) {
			for(misi::iterator it = adj.begin() ; it != adj.end() ; ++it) {
				if(visited[it->first]) {
					continue;
				}
				int cont = 0;
				for(set<int>::iterator it2 = it->second.begin() ; it2 != it->second.end() ; ++it2) {
					if(visited[*it2] && aux.find(*it2) != aux.end()) {
						cont++;
						//cout << *it2 << ' ' << cont << '\n';
					}
					if(cont == 3) {
						break;
					}
				}
				if(cont == 3) {
					visited[it->first] = 1;
					flag = true;
				}
			}
			if(!flag || aux.size() == N) {
				break;
			}
			for(mii::iterator it = visited.begin() ; it != visited.end() ; ++it) {
				//cout << it->first << ' ' << it->second << '\n';
				if(aux.find(it->first) == aux.end() && it->second) {
					aux.insert(it->first);
				}
			}
			if(flag) {
				n++;
				//cout << n << '\n';
				flag = false;
			}
		}
		if(!flag && aux.size() < N) {
			cout << "THIS BRAIN NEVER WAKES UP\n";
		} else {
			cout << "WAKE UP IN, " << n << ", YEARS\n";
		}
	}
	return 0;
}