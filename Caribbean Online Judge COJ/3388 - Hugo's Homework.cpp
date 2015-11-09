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

int toInteger(string n) {
	int newN;
	stringstream ss;
	ss << n;
	ss >> newN;
	return newN;
}

string toString(int n) {
	ostringstream ss;
	ss << n;
	return ss.str();
}

string sortInteger(int n) {
	string s;
	for(int i = 0 ; i <= 9 ; i++) {
		int temp = n;
		while(temp > 0) {
			if(temp % 10 == i) {
				s.push_back(i + '0');
			}
			temp /= 10;
		}
	}
	return s;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int N, M, cont = 0;
	cin >> N;
	M = toInteger(sortInteger(N));
	while(N) {
		int subs = N - M;
		N = subs;
		M = toInteger(sortInteger(N));
		cont++;
	}
	cout << cont << '\n';
	return 0;
}