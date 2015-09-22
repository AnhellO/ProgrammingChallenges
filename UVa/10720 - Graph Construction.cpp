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
	int n;
	while(cin >> n && n) {
		deque<int> seq(n);
		bool flag = true;
		int odd = 0;
		for(int i = 0 ; i < n ; i++) {
			cin >> seq[i];
			if(seq[i] > n - 1 || seq[i] < 0) {
				flag = false;
			}
			if(seq[i] % 2) {
				odd++;
			}
		}
		if(odd % 2 || !flag) {
			cout << "Not possible\n";
			continue;
		}
		flag = true;
		while(!seq.empty()) {
			sort(seq.begin(), seq.end(), greater<int>());
			int k = seq[0];
			seq.pop_front();
			if(!k) {
				break;
			}
			for(int i = 0 ; i < k ; i++) {
				seq[i]--;
				if(seq[i] < 0) {
					flag = false;
					break;
				}
			}
			if(!flag) break;
		}
		cout << ((flag) ? "Possible\n" : "Not possible\n");
	}
	return 0;
}