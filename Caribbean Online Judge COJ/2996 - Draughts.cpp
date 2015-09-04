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
#include <list>
#include <iomanip>
#include <utility>
#define MAX 10
using namespace std;

char chess[MAX][MAX];
int m = 0;

void eat(int x, int y, int atePieces) {
	if(x - 1 >= 0 && y + 1 < MAX && chess[x - 1][y + 1] == 'B') {
		if(x - 2 >= 0 && y + 2 < MAX && chess[x - 2][y + 2] == '#') {
			chess[x - 1][y + 1] = '#';
			eat(x - 2, y + 2, atePieces + 1);
			chess[x - 1][y + 1] = 'B';
		}
	}
	if(x + 1 < MAX && y + 1 < MAX && chess[x + 1][y + 1] == 'B') {
		if(x + 2 < MAX && y + 2 < MAX && chess[x + 2][y + 2] == '#') {
			chess[x + 1][y + 1] = '#';
			eat(x + 2, y + 2, atePieces + 1);
			chess[x + 1][y + 1] = 'B';
		}
	}
	if(x + 1 < MAX && y - 1 >= 0 && chess[x + 1][y - 1] == 'B') {
		if(x + 2 < MAX && y - 2 >= 0 && chess[x + 2][y - 2] == '#') {
			chess[x + 1][y - 1] = '#';
			eat(x + 2, y - 2, atePieces + 1);
			chess[x + 1][y - 1] = 'B';
		}
	}
	if(x - 1 >= 0 && y - 1 >= 0 && chess[x - 1][y - 1] == 'B') {
		if(x - 2 >= 0 && y - 2 >= 0 && chess[x - 2][y - 2] == '#') {
			chess[x - 1][y - 1] = '#';
			eat(x - 2, y - 2, atePieces + 1);
			chess[x - 1][y - 1] = 'B';
		}
	}
	m = max(m, atePieces);
}

int main() {
	int T;
	scanf("%d", &T);
	while(T--) {
		vector<pair<int, int> > coordinates;
		for(int i = 0 ; i < MAX ; i++) {
			for(int j = 0 ; j < MAX ; j++) {
				scanf(" %c", &chess[i][j]);
				if(chess[i][j] == 'W') {
					coordinates.push_back(make_pair(i, j));
				}
			}
		}
		for(int i = 0 ; i < coordinates.size() ; i++) {
			chess[coordinates[i].first][coordinates[i].second] = '#';
			eat(coordinates[i].first, coordinates[i].second, 0);
			chess[coordinates[i].first][coordinates[i].second] = 'W';
		}
		printf("%d\n", m);
		m = 0;
	}
	return 0;
}