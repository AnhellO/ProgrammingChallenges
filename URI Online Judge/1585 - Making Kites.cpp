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
using namespace std;

int main() {
	int N, x, y;
	scanf("%d", &N);
	while(N--) {
		scanf("%d %d", &x, &y);
		printf("%d cm2\n", (x * y) / 2);
	}
	return 0;
}