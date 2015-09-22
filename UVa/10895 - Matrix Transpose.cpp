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

vvi transpose(vvi matrix, int n, int m) {
	vvi t(m, vector<int>(n, 0));
	for(int i = 0 ; i < m ; i++) {
		for(int j = 0 ; j < n ; j++) {
			t[i][j] = matrix[j][i];
		}
	}
	return t;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	/*ifstream file("a.in");if(file)
	freopen("a.in", "rt", stdin);
	ofstream output("a.out");
	output.close();*/
	int n, m, r;
	while(cin >> n >> m) {
		vvi matrix(n, vector<int>(m, 0)), t;
		for(int i = 0 ; i < n ; i++) {
			cin >> r;
			if(!r) {
				continue;
			}
			vi pos(r);
			for(int j = 0 ; j < r ; j++) {
				cin >> pos[j];
				pos[j]--;
			}
			for(int j = 0 ; j < r ; j++) {
				int aux;
				cin >> aux;
				matrix[i][pos[j]] = aux;
			}
		}
		t = transpose(matrix, n, m);
		cout << m << ' ' << n << '\n';
		for(int i = 0 ; i < m ; i++) {
			int cont = 0;
			vi pos;
			for(int j = 0 ; j < n ; j++) {
				if(t[i][j] != 0) {
					cont++;
					pos.push_back(j + 1);
				}
			}
			cout << cont;
			for(int i = 0 ; i < pos.size() ; i++) {
				cout << ' ' << pos[i];
			}
			cout << '\n';
			bool flag = false;
			for(int j = 0 ; j < n ; j++) {
				if(t[i][j] != 0) {
					if(!flag) {
						cout << t[i][j];
						flag = true;
					} else {
						cout << ' ' << t[i][j];
					}
				}
			}
			cout << '\n';
		}
	}
	return 0;
}