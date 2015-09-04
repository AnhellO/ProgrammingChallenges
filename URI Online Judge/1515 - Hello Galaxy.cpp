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
	int N, A, T;
	string planet;
	while(cin >> N && N) {
		map<int, string> m;
		while(N--) {
			cin >> planet >> A >> T;
			m[A - T] = planet;
		}
		map<int, string>::iterator it = m.begin();
		cout << it->second << '\n';
	}
	return 0;
}