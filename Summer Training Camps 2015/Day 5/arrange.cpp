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

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    ifstream file("arrange.in");
	if(file) freopen("arrange.in", "rt", stdin);
	ofstream output("arrange.out");
    int n, cont = 0;
    cin >> n;
    vector<string> v(n);
    string s;
    getline(cin, s);
    char c = 'A';
    for(int i = 0 ; i < n ; i++) {
        getline(cin, v[i]);
    }
    sort(v.begin(), v.end());
    for(int i = 0 ; i < n ; i++) {
        if(v[i][0] == c) {
            cont++;
            c++;
        }
    }
    output << cont << '\n';
    output.close();
    return 0;
}

