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
	while(scanf("%d", &N) && N) {
		int loop[N], peaks = 0;
		for(int i = 0 ; i < N ; i++) {
			scanf("%d", &loop[i]);
		}
		for(int i = 1 ; i < N - 1 ; i++) {
			if((loop[i - 1] < loop[i] && loop[i + 1] < loop[i]) || (loop[i - 1] > loop[i] && loop[i + 1] > loop[i])) {
				peaks++;
			} else {
				continue;
			}
		}
		if((loop[N - 1] < loop[0] && loop[1] < loop[0]) || (loop[N - 1] > loop[0] && loop[1] > loop[0])) {
			peaks++;
		}
		if((loop[N - 2] < loop[N - 1] && loop[0] < loop[N - 1]) || (loop[N - 2] > loop[N - 1] && loop[0] > loop[N - 1])) {
			peaks++;
		}
		printf("%d\n", peaks);
	}
	return 0;
}