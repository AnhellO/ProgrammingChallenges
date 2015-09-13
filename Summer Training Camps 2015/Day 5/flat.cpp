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
    ifstream file("flat.in");
	if(file) freopen("flat.in", "rt", stdin);
	ofstream output("flat.out");
    int n, c, a;
    string s;
    map<string, int> m;
    cin >> n >> c;
    for(int i = 0 ; i < n ; i++) {
        cin >> a >> s;
        m[s] += a;
    }
    int area = 0;
    double rArea = 0.0;
    for(map<string, int>::iterator it = m.begin() ; it != m.end() ; ++it) {
        area += it->second;
    }
    rArea = (((double)area - (double)m["balcony"]) + ((double)m["balcony"] * 0.5)) * (double)c;
    output << area << '\n' << m["bedroom"] << '\n';
    if(floor(rArea) == rArea) {
        output << (int)rArea << '\n';
    } else {
        output << fixed << setprecision(1) << rArea << '\n';
    }
    output.close();
    return 0;
}

