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
#define INF 1000000000000
#define MAX 1000000;
using namespace std;

int main() {
	int n;
	while(scanf("%d", &n) && n) {
		int people[n];
		for(int i = 0 ; i < n ; i++) {
			scanf("%d", &people[i]);
		}
		sort(people, people + n);
		printf("%d", people[0]);
		for(int i = 1 ; i < n ; i++) {
			printf(" %d", people[i]);
		}
		printf("\n");
	}
	return 0;
}