#include <bits/stdc++.h>
using namespace std;

int N, pos;

int main() {
	scanf("%d", &N);
	int cows[N];
	for(int i = 0 ; i < N ; i++) {
		scanf("%d %d", &pos, &cows[i]);
	}
	int groups = 1, slower = cows[N - 1];
	for(int i = N - 2 ; i >= 0 ; i--) {
		if(cows[i] <= slower) groups++;
		slower = min(slower, cows[i]);
	}
	printf("%d\n", groups);
	return 0;
}