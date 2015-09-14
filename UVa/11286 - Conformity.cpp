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
using namespace std;

typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef map<int, int> mii;
typedef map<char, int> mci;
typedef map<string, int> msi;
typedef map<int, ii> miii;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    /*ifstream file("a.in");
	if(file) freopen("a.in", "rt", stdin);
	ofstream output("a.out");
    output.close();*/
    int n;
    while(cin >> n && n) {
        map<vi, int> m;
        while(n--) {
            vector<int> v(5);
            for(int i = 0 ; i < 5 ; i++) {
                cin >> v[i];
            }
            sort(v.begin(), v.end());
            m[v]++;
        }
        int mode = 0;
        for(map<vi, int>::iterator it = m.begin() ; it != m.end() ; ++it) {
            if(it->second >= mode) {
                mode = it->second;
            }
        }
        int cont = 0;
        for(map<vi, int>::iterator it = m.begin() ; it != m.end() ; ++it) {
            if(it->second == mode) {
                cont += mode;
            }
        }
        cout << cont << '\n';
    }
}
