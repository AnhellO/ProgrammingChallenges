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
using namespace std;

int main() {
	int T, N;
	scanf("%d", &T);
	for(int k = 1 ; k <= T ; k++) {
		scanf("%d", &N);
		int creatures[N];
		for(int i = 0 ; i < N ; i++) {
			scanf("%d", &creatures[i]);
		}
		sort(creatures, creatures + N);
		printf("Case %d: %d\n", k, creatures[N - 1]);
	}
	return 0;
}