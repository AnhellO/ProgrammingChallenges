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
	cin.tie(0);
	ios::sync_with_stdio(0);
	int N, K, M;
	string line;
	cin >> N;
	while(N--) {
		map<unsigned char, int> table;
		cin >> K;
		while(K--) {
			unsigned char c;
			int temp;
			cin >> c >> temp;
			table[c] = temp;
		}
		cin >> M;
		getline(cin, line);
		int sum = 0;
		while(M--) {
			getline(cin, line);
			for(int i = 0 ; i < line.length() ; i++) {
				sum += table[line[i]];
			}
		}
		printf("%.2lf$\n", sum / 100.0);
	}
	return 0;
}