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
#include <functional>
#define INF 1000000000000
#define MAX 1000000
#define MOD 10000007
#define len(arr) (sizeof(arr)/sizeof(arr[0]))
using namespace std;

typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vi> vvi;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef vector<vii> vvii;
typedef map<int, int> mii;
typedef map<char, int> mci;
typedef map<string, int> msi;
typedef map<int, ii> miii;
typedef map<string, string> mss;
typedef map<string, vs> msvs;
typedef long long int lli;
typedef unsigned long long int ulli;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	string s;
	getline(cin, s);
	while(getline(cin, s)) {
		mci m;
		for(int i = 0 ; i < s.length() ; i++) {
			if(isalpha(s[i])) {
				m[tolower(s[i])]++;
			}
		}
		int _max = 0;
		string out;
		for(mci::iterator it = m.begin() ; it != m.end() ; ++it) {
			if(it->second > _max) {
				_max = it->second;
			}
		}
		for(mci::iterator it = m.begin() ; it != m.end() ; ++it) {
			if(it->second == _max) {
				out.push_back(it->first);
			}
		}
		sort(out.begin(), out.end());
		cout << out << '\n';
	}
	return 0;
}