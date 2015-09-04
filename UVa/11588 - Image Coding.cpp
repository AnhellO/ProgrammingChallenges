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
	int X, R, C, M, N;
	cin >> X;
	for(int k = 1 ; k <= X ; k++) {
		cout << "Case " << k << ": ";
		cin >> R >> C >> M >> N;
		vector<string> image(R);
		map<char, int> m;
		for(int i = 0 ; i < R ; i++) {
			cin >> image[i];
			for(int j = 0 ; j < C ; j++) {
				m[image[i][j]]++;
			}
		}
		int _max = 0;
		for(map<char, int>::iterator it = m.begin() ; it != m.end() ; ++it) {
			_max = max(it->second, _max);
		}
		int total = 0;
		for(int i = 0 ; i < R ; i++) {
			for(int j = 0 ; j < C ; j++) {
				total += (m[image[i][j]] == _max) ? M : N;
			}
		}
		cout << total << '\n';
	}
	return 0;
}