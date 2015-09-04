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
	int T, S, A, F;
	scanf("%d", &T);
	while(T--) {
		scanf("%d %d %d", &S, &A, &F);
		int s[F], a[F];
		for(int i = 0 ; i < F ; i++) {
			scanf("%d %d", &s[i], &a[i]);
		}
		sort(s, s + F);
		sort(a, a + F);
		if(F % 2) {
			printf("(Street: %d, Avenue: %d)\n", s[F / 2], a[F / 2]);
		} else {
			F--;
			printf("(Street: %d, Avenue: %d)\n", s[F / 2], a[F / 2]);
		}
	}
	return 0;
}