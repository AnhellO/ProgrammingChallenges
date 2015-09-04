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
using namespace std;

int main() {
	int K, N, M, x, y;
	while(scanf("%d", &K) && K) {
		scanf("%d %d", &N, &M);
		while(K--) {
			scanf("%d %d", &x, &y);
			if(x == N || y == M) {
				printf("divisa\n");
				continue;
			} else if(x > N && y > M) {
				printf("NE\n");
				continue;
			} else if(x < N && y > M) {
				printf("NO\n");
				continue;
			} else if(x < N && y < M) {
				printf("SO\n");
				continue;
			} else {
				printf("SE\n");
				continue;
			}
		}
	}
	return 0;
}