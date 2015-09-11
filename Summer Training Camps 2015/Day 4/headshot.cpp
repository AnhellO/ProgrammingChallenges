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
    ifstream file("headshot.in");
	if(file) freopen("headshot.in", "rt", stdin);
	ofstream output("headshot.out");
    string s;
    cin >> s;
    int N = s.length(), cont1 = 0, cont2 = 0;
    for(int i = 0 ; i < N ; i++) {
        if(s[i] == '0') {
            cont1++;
        }
    }
    for(int i = 0 ; i < N ; i++) {
        if(i < N - 1) {
            if(s[i] == '0') {
                if(s[i + 1] == '0') {
                    cont2++;
                }
            }
        } else {
            if(s[i] == '0') {
                if(s[0] == '0') {
                    cont2++;
                }
            }
        }
    }
    double pRotate = (double)cont1 / (double)N;
    double pShoot = (double)cont2 / (double)cont1;
    if(pRotate == pShoot) {
        output << "EQUAL\n";
    } else if(pRotate < pShoot) {
        output << "SHOOT\n";
    } else {
        output << "ROTATE\n";
    }
    output.close();
    return 0;
}

