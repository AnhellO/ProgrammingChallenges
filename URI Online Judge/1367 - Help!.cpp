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
using namespace std;

int main() {
	int N, T;
	char prob;
	string s;
	while(scanf("%d", &N) && N) {
		map<char, int> m;
		vector<char> valid;
		int solved = 0;
		while(N--) {
			cin >> prob >> T >> s;
			if(s == "correct") {
				m[prob] += T;
				solved++;
				valid.push_back(prob);
			} else {
				m[prob] += 20;
			}
		}
		sort(valid.begin(), valid.end());
		int score = 0;
		for(map<char, int>::iterator it = m.begin() ; it != m.end() ; ++it) {
			if(binary_search(valid.begin(), valid.end(), it->first)) {
				score += it->second;
			}
		}
		printf("%d %d\n", solved, score);
	}
	return 0;
}