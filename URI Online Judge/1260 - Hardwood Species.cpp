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
#include <list>
#include <iomanip>
#include <utility>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cout << fixed;
	string s;
	int cont = 0;
	map<string, int> m;
	getline(cin, s);
	getline(cin, s);
	while(getline(cin, s)) {
		if(s == "") {
			for(map<string, int>::iterator it = m.begin() ; it != m.end() ; ++it) {
				double aux = ((double)it->second / (double)cont) * 100.0;
				cout << it->first << ' ' << setprecision(4) << aux << '\n';
			}
			m.clear();
			cont = 0;
			cout << '\n';
		} else {
			m[s]++;
			cont++;
		}
	}
	for(map<string, int>::iterator it = m.begin() ; it != m.end() ; ++it) {
		double aux = ((double)it->second / (double)cont) * 100.0;
		cout << it->first << ' ' << setprecision(4) << aux << '\n';
	}
	return 0;
}