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
	int T, N;
	cin >> T;
	while(T--) {
		cin >> N;
		priority_queue<string > pq;
		string final;
		for(int i = 0 ; i < N ; i++) {
			string s;
			cin >> s;
			pq.push(s);
		}
		while(!pq.empty()) {
			string aux = pq.top();
			pq.pop();
			final.push_back(aux[0]);
			aux.erase(0, 1);
			if(!aux.empty()) {
				pq.push(aux);
			}
		}
		cout << final << '\n';
	}
	return 0;
}