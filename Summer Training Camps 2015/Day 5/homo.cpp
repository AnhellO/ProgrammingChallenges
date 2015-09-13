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

map<int, int> m;
int contDif = 0, contHomo = 0;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    ifstream file("homo.in");
	if(file) freopen("homo.in", "rt", stdin);
	ofstream output("homo.out");
    int n, num;
    string s;
    cin >> n;
    for(int i = 0 ; i < n ; i++) {
        cin >> s >> num;
        if(s == "insert") {
            if(!m[num]) {
                contDif++;
                m[num]++;
            } else {
                if(m[num] == 1) {
                    contHomo++;
                }
                m[num]++;
            }
        } else {
            if(m[num]) {
                m[num]--;
                if(m[num] == 1) {
                    contHomo--;
                } else if(!m[num]) {
                    contDif--;
                }
            }
        }
        if(contDif < 2 && !contHomo) {
            output << "neither\n";
        } else if(contDif >= 2 && !contHomo) {
            output << "hetero\n";
        } else if(contDif < 2 && contHomo > 0) {
            output << "homo\n";
        } else {
            output << "both\n";
        }
    }
    output.close();
    return 0;
}

