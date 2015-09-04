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
#define INF 1000000000000
#define MAX 1000000;
using namespace std;

map<int, vector<int> > tree;
map<int, bool> visited;
int total;

void get(int first) {
	if(visited[first]) {
		total++;
	}
	for(int i = 0 ; i < tree[first].size() ; i++) {
		get(tree[first][i]);
	}
}

void put(int first) {
	if(visited[first]) {
		visited[first] = 0;
	} else {
		visited[first] = 1;
	}
	for(int i = 0 ; i < tree[first].size() ; i++) {
		put(tree[first][i]);
	}
}

int main() {
	int N, Q, a, b;
	while(scanf("%d %d", &N, &Q) != EOF) {
		for(int i = 0 ; i < N - 1 ; i++) {
			scanf("%d %d", &a, &b);
			tree[a].push_back(b);
		}
		for(int i = 0 ; i < Q ; i++) {
			scanf("%d %d", &a, &b);
			if(!a) {
				put(b);
				/*for(map<int, bool>::iterator it = visited.begin() ; it != visited.end() ; ++it) {
					printf("%d %d\n", it->first, it->second);
				}*/
			} else {
				total = 0;
				get(b);
				printf("%d\n", total);
			}
		}
		tree.clear();
		visited.clear();
	}
	return 0;
}