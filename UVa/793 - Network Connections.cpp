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

vi pset;

vector<string> split(string s, string regex)
{
	vector<string> sections;
	int pos = s.find_first_of(regex);
	string subS;
	while(pos != string::npos)
	{
		subS = s.substr(0, pos);
		s.erase(0, pos + 1);
		sections.push_back(subS);
		pos = s.find_first_of(regex);
	}
	sections.push_back(s);
	return sections;
}

int toInt(string s) {
	int n;
	stringstream ss;
	ss << s;
	ss >> n;
	return n;
}

void initSet(int N) {
	pset.assign(N, 0);
	for(int i = 0 ; i < N ; i++) {
		pset[i] = i;
	}
}

int findSet(int i) {
	return (pset[i] == i) ? i : (pset[i] = findSet(pset[i]));
}

bool isSameSet(int i, int j) {
	return findSet(i) == findSet(j);
}

void unionSet(int i, int j) {
	pset[findSet(i)] = findSet(j);
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	/*ifstream file("a.in");if(file)
	freopen("a.in", "rt", stdin);
	ofstream output("a.out");
	output.close();*/
	int T, N, cont1 = 0, cont2 = 0;
	string s;
	bool flag = true;
	cin >> T;
	getline(cin, s);
	getline(cin, s);
	while(getline(cin, s)) {
		if(flag) {
			N = toInt(s);
			initSet(N);
			flag = false;
			continue;
		}
		if(s.empty()) {
			cout << cont1 << ',' << cont2 << "\n\n";
			cont1 = cont2 = 0;
			flag = true;
			continue;
		}
		vector<string> tokens = split(s, " ");
		int i = toInt(tokens[1]), j = toInt(tokens[2]);
		if(tokens[0] == "c") {
			unionSet(i - 1, j - 1);
		} else {
			if(isSameSet(i - 1, j - 1)) {
				cont1++;
			} else {
				cont2++;
			}
		}
	}
	cout << cont1 << ',' << cont2 << '\n';
	return 0;
}