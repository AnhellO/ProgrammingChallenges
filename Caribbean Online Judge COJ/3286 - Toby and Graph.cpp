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

int nSets;
vi p;

void initSet(int N) {
	nSets = N;
	p.assign(N, 0);
	for(int i = 0 ; i < N ; i++) {
		p[i] = i;
	}
}

int findSet(int i) {
	return(p[i] == i) ? i : p[i] = findSet(p[i]);
}

bool isSameSet(int i, int j) {
	return findSet(i) == findSet(j);
}

void unionSet(int i, int j) {
	if(!isSameSet(i, j)) {
		nSets--;
		p[findSet(i)] = findSet(j);
	}
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int T, N, M;
	cin >> T;
	while(T--) {
		cin >> N >> M;
		initSet(N);
		while(M--) {
			int a, b;
			cin >> a >> b;
			a--, b--;
			unionSet(a, b);
		}
		cout << (nSets * (nSets - 1)) / 2 << '\n';
	}
	return 0;
}