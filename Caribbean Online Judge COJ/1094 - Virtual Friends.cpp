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

vector<int> pset, setSizes, rank;

void initSet(int N) {
	pset.assign(N, 0);
	rank.assign(N, 0);
	setSizes.assign(N, 1);
	for(int i = 0 ; i < N ; i++) {
		pset[i] = i;
	}
}

int findSet(int i) {
	return (pset[i] == i) ? i : (pset[i] = findSet(pset[i]));
}

bool isSameSet(int i, int j) {
	return findSet(i) == findSet(j);
}

void unionSet(int i, int j) {
	if(!isSameSet(i, j)) {
		int x = findSet(i), y = findSet(j);
		if(rank[x] > rank[y]) {
			setSizes[findSet(x)] += setSizes[findSet(y)];
			pset[y] = x;
		} else {
			setSizes[findSet(y)] += setSizes[findSet(x)];
			pset[x] = y;
			if(rank[x] == rank[y]) {
				rank[y]++;
			}
		}
	}
}

int sizeOfSet(int i) {
	return setSizes[findSet(i)];
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int T, F;
	string s1, s2;
	cin >> T;
	while(T--) {
		cin >> F;
		initSet(F * 2);
		msi m;
		int id = 0;
		for(int i = 0 ; i < F ; i++) {
			cin >> s1 >> s2;
			if(!m.count(s1)) {
				m[s1] = id++;
			}
			if(!m.count(s2)) {
				m[s2] = id++;
			}
			unionSet(m[s1], m[s2]);
			cout << sizeOfSet(m[s1]) << '\n';
		}
	}
	return 0;
}