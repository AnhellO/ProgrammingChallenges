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
	int n, m;
	cin >> n >> m;
	vi f(n), b(m), fp, bp, a;
	mii freq, pos;
	for(int i = 0 ; i < n ; i++) {
		cin >> f[i];
		freq[f[i]]++;
		pos[f[i]] = i + 1;
	}
	for(int i = 0 ; i < m ; i++) {
		cin >> b[i];
	}
	fp = f;
	sort(fp.begin(), fp.end());
	bp = b;
	sort(bp.begin(), bp.end());
	bool flag = false;
	for(mii::iterator it = freq.begin() ; it != freq.end() ; ++it) {
		if(it->second >= 2) {
			if(binary_search(bp.begin(), bp.end(), it->first)) {
				flag = true;
			}
		}
	}
	for(int i = 0 ; i < m ; i++) {
		if(binary_search(fp.begin(), fp.end(), b[i])) {
			a.push_back(pos[b[i]]);
		} else {
			break;
		}
	}
	if(a.size() < m || (a.size() < m && flag)) {
		cout << "Impossible\n";
	} else if(a.size() == m && flag) {
		cout << "Ambiguity\n";
	} else if(a.size() == m && !flag) {
		cout << "Possible\n" << a[0];
		for(int i = 1 ; i < m ; i++) {
			cout << ' ' << a[i];
		}
		cout << '\n';
	}
	return 0;
}