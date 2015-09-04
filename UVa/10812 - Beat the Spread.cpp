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
	int N, s, d;
	scanf("%d", &N);
	while(N--) {
		scanf("%d %d", &s, &d);
		if(s < d or (s + d) % 2) {
			printf("impossible\n");
			continue;
		}
		int _min, _max;
		_min = (s - d) / 2;
		_max = s - _min;
		printf("%d %d\n", _max, _min);
	}
	return 0;
}