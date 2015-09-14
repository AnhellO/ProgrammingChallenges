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
#define MOD 10000007
using namespace std;

typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef vector<int> vi;
typedef vector<vi> vivi;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef vector<vii> vvii;
typedef map<int, int> mii;
typedef map<char, int> mci;
typedef map<string, int> msi;
typedef map<int, ii> miii;

//unsigned long long int fact(const )

unsigned long long int fact[8] = {1, 2, 6, 24, 120, 720, 5040, 40320};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
	int N;
	while(cin >> N) {
		int cont = 0;
		while(N) {
			for(int i = 7 ; i >= 0 ; i--) {
				if(fact[i] <= N) {
					cont++;
					N -= fact[i];
					break;
				}
			}
		}
		cout << cont << '\n';
	}
    return 0;
}