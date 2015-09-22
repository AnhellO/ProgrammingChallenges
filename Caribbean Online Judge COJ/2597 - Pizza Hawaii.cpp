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
#define for_each(type, it, cont) for(type::iterator it = cont.begin() ; it != cont.end() ; ++it)
using namespace std;

typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef vector<vii> vvii;
typedef map<int, int> mii;
typedef map<char, int> mci;
typedef map<string, int> msi;
typedef map<int, ii> miii;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	/*ifstream file("a.in");if(file)
	freopen("a.in", "rt", stdin);
	ofstream output("a.out");
	output.close();*/
	int T, N, m;
	string s;
	bool flag = false;
	cin >> T;
	while(T--) {
		if(!flag) {
			flag = true;
		} else {
			cout << "\n";
		}
		msi freq, freq2;
		map<string, msi> ing;
		cin >> N;
		while(N--) {
			cin >> s >> m;
			vector<string> v(m);
			for(int i = 0 ; i < m ; i++) {
				cin >> v[i];
				freq[v[i]]++;
			}
			cin >> m;
			for(int i = 0 ; i < m ; i++) {
				cin >> s;
				for(int j = 0 ; j < v.size() ; j++) {
					ing[v[j]][s]++;
				}
				freq2[s]++;
			}
			/*for(map<string, msi>::iterator it = ing.begin() ; it != ing.end() ; ++it) {
				for(msi::iterator it2 = it->second.begin() ; it2 != it->second.end() ; ++it2) {
					cout << it->first << ' ' << it2->first << ' ' << it2->second << '\n';
				}
			}*/
		}
		/*for(msi::iterator it = freq.begin() ; it != freq.end() ; ++it) {
			cout << it->first << ' ' << it->second << '\n';
		}*/
		for(map<string, msi>::iterator it = ing.begin() ; it != ing.end() ; ++it) {
			for(msi::iterator it2 = it->second.begin() ; it2 != it->second.end() ; ++it2) {
				if(freq[it->first] == it2->second && freq2[it2->first] == it2->second) {
					//cout << it->first << ' ' << freq[it->first] << ' ' << it2->second << '\n';
					cout << '(' << it->first << ", " << it2->first << ")\n";
				}
			}
		}
	}
	return 0;
}