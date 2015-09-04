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
	int N;
	scanf("%d", &N);
	int stone[N];
	for(int i = 0 ; i < N ; i++) {
		scanf("%d", &stone[i]);
	}
	sort(stone, stone + N);
	int dif = stone[1] - stone[0];
	for(int i = 1 ; i < N - 1 ; i++) {
		if(stone[i + 1] - stone[i] != dif) {
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	return 0;
}