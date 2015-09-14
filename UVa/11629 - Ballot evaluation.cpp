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
    //cin.tie(0);
    //ios::sync_with_stdio(0);
    /*ifstream file("a.in");
	if(file) freopen("a.in", "rt", stdin);
	ofstream output("a.out");
    output.close();*/
    int p, g;
    cin >> p >> g;
    msi m;
    for(int i = 0 ; i < p ; i++) {
        int x, y;
        string s;
        cin >> s;
        scanf("%d.%d", &x, &y);
        m[s] = x * 10 + y;
    }
    for(int i = 1 ; i <= g ; i++) {
        cout << "Guess #" << i << " was ";
        int p, sum = 0;
        string s;
        while(cin >> s && (s != "=" && s != ">=" && s != "<=" && s != ">" && s != "<")) {
            if(s == "+") {
                continue;
            }
            sum += m[s];
        }
        cin >> p;
        p *= 10;
        if(s == "=") {
            cout << ((sum == p) ? "correct.\n" : "incorrect.\n");
        } else if(s == ">=") {
            cout << ((sum >= p) ? "correct.\n" : "incorrect.\n");
        } else if(s == "<=") {
            cout << ((sum <= p) ? "correct.\n" : "incorrect.\n");
        } else if(s == ">") {
            cout << ((sum > p) ? "correct.\n" : "incorrect.\n");
        } else {
            cout << ((sum < p) ? "correct.\n" : "incorrect.\n");
        }
    }
    return 0;
}
