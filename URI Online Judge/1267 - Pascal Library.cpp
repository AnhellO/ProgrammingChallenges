#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <cstdlib>
#include <cctype>
using namespace std;

int main() {
	int N, D;
	while(scanf("%d %d", &N, &D) && (N && D)) {
		vector<int> a(N, 0);
		while(D--) {
			for(int i = 0 ; i < N ; i++) {
				int val;
				scanf("%d", &val);
				if(val) {
					if(a[i]) {
						continue;
					} else if(!a[i]) {
						a[i] = 1;
					}
				} else {
					if(!a[i] || a[i] == 1) {
						a[i] = 2;
					}
				}
			}
		}
		int i;
		for(i = 0 ; i < N ; i++) {
			if(a[i] == 1) {
				printf("yes\n");
				break;
			}
		}
		if(i == N) {
			printf("no\n");
			continue;
		}
	}
	return 0;
}