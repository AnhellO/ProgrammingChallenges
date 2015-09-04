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
#define MAX 101
using namespace std;

char mine[MAX][MAX];

int main() {
	int n, m, field = 1;
	scanf("%d %d", &n, &m);
	while(true) {
		for(int i = 0 ; i < n ; i++) {
			for(int j = 0 ; j < m ; j++) {
				scanf(" %c", &mine[i][j]);
			}
		}
		for(int i = 0 ; i < n ; i++) {
			for(int j = 0 ; j < m ; j++) {
				if(mine[i][j] == '.') {
					int adj = 0;
					if(i - 1 >= 0 && j - 1 >= 0 && mine[i - 1][j - 1] == '*') {
						adj++;
					}
					if(i - 1 >= 0 && mine[i - 1][j] == '*') {
						adj++;
					}
					if(i - 1 >= 0 && j + 1 < m && mine[i - 1][j + 1] == '*') {
						adj++;
					}
					if(j + 1 < m && mine[i][j + 1] == '*') {
						adj++;
					}
					if(i + 1 < n && j + 1 < m && mine[i + 1][j + 1] == '*') {
						adj++;
					}
					if(i + 1 < n && mine[i + 1][j] == '*') {
						adj++;
					}
					if(i + 1 < n && j - 1 >= 0 && mine[i + 1][j - 1] == '*') {
						adj++;
					}
					if(j - 1 >= 0 && mine[i][j - 1] == '*') {
						adj++;
					}
					mine[i][j] = (adj + '0');
				}
			}
		}
		printf("Field #%d:\n", field);
		field++;
		for(int i = 0 ; i < n ; i++) {
			for(int j = 0 ; j < m ; j++) {
				printf("%c", mine[i][j]);
			}
			printf("\n");
		}
		scanf("%d %d", &n, &m);
		if(!n && !m) {
			break;
		} else {
			printf("\n");
		}
	}
	return 0;
}