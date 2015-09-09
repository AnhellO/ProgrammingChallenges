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
#define MAX 1000000
using namespace std;

typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef map<int, int> mii;
typedef map<char, int> mci;
typedef map<string, int> msi;
typedef map<int, ii> miii;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    /*ifstream file("a.in");
	if(file) freopen("a.in", "rt", stdin);
	ofstream output("a.out");
    output.close();*/
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
