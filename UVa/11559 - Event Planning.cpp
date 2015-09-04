#include <bits/stdc++.h>
using namespace std;

int N, B, H, W, p, a;

int main() {
	while(scanf("%d %d %d %d", &N, &B, &H, &W) != EOF) {
		int minCost = 1000000;
		while(H--) {
			scanf("%d", &p);
			if(p < minCost) {
				bool flag = false;
				for(int i = 0 ; i < W ; i++) {
					scanf("%d", &a);
					if(flag) continue;
					if(a >= N) {
						minCost = p;
						flag = true;
					}
				}
			}
			else {
				for(int i = 0 ; i < W ; i++) {
					scanf("%d", &a);
				}
			}
		}
		(minCost != 1000000 && minCost * N <= B) ? printf("%d\n", minCost * N) : printf("stay home\n");
	}
	return 0;
}