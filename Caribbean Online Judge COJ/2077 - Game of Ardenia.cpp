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
#define size(arr) (sizeof(arr)/sizeof(arr[0]))
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

vector<string> v;
bool A, B;

void check1() {
	for(int i = 0 ; i < 5 ; i++) {
		if(v[i].find("AAA") != string::npos) {
			A = true;
		}
		if(v[i].find("BBB") != string::npos) {
			B = true;
		}
		if(A && B) {
			return;
		}
		for(int j = 0 ; j < 5 ; j++) {
			if(i < 3) {
				if(v[i][j] == 'A' && v[i + 1][j] == 'A' && v[i + 2][j] == 'A') {
					A = true;
				}
				if(v[i][j] == 'B' && v[i + 1][j] == 'B' && v[i + 2][j] == 'B') {
					B = true;
				}
			}
		}
	}
}

void check2() {
	for(int i = 0 ; i < 5 ; i++) {
		if(A && B) {
			return;
		}
		for(int j = 0 ; j < 5 ; j++) {
			if(i < 3 && j < 3) {
				if(v[i][j] == 'A' && v[i + 1][j + 1] == 'A' && v[i + 2][j + 2] == 'A') {
					A = true;
				}
				if(v[i][j] == 'B' && v[i + 1][j + 1] == 'B' && v[i + 2][j + 2] == 'B') {
					B = true;
				}
			}
			if(i < 3 && j > 1) {
				if(v[i][j] == 'A' && v[i + 1][j - 1] == 'A' && v[i + 2][j - 2] == 'A') {
					A = true;
				}
				if(v[i][j] == 'B' && v[i + 1][j - 1] == 'B' && v[i + 2][j - 2] == 'B') {
					B = true;
				}
			}
		}
	}
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	/*ifstream file("a.in");if(file)
	freopen("a.in", "rt", stdin);
	ofstream output("a.out");
	output.close();*/
	int Z;
	cin >> Z;
	while(Z--) {
		v.clear();
		v.resize(5);
		A = B = false;
		for(int i = 0 ; i < 5 ; i++) {
			cin >> v[i];
		}
		check1();
		check2();
		if(A && !B) {
			cout << "A wins\n";
		} else if (!A && B) {
			cout << "B wins\n";
		} else {
			cout << "draw\n";
		}
	}
	return 0;
}