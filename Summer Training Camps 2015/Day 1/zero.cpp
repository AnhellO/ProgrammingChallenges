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
#include <fstream>
#define INF 1000000000000
#define MAX 52

int main() {
    ifstream file("zero.in");
	if(file) freopen("zero.in", "rt", stdin);
	int n;
	scanf("%d", &n);
	long long int arr[n];
	for(int i = 0 ; i < n ; i++) {
        scanf("%lld", &arr[i]);
	}
	ofstream output("turtle.out");

	for(int i = n - 1 ; i >= 0 ; i--) {
        output << arr[i] << ' ';
	}
	output.close();
	return 0;
}
