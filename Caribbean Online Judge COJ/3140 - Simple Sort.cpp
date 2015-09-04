#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> v;

int main() {
	while(scanf("%d", &n) != EOF) {
		v.push_back(n);
	}
	sort(v.begin(), v.end());
	for(int i = 0 ; i < v.size() ; i++) {
		printf("%d\n", v[i]);
	}
	return 0;
}