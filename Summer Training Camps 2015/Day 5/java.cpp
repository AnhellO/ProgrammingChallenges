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

bool val(string s) {
    int n = s.length();
    for(int i = 0 ; i < n ; i++) {
        if(!i) {
            if(s[i] == '_' || isupper(s[i])) {
                return false;
            }
        } else if(i < n - 1) {
            if((s[i] == '_' && isupper(s[i + 1])) || (s[i] == '_' && s[i + 1] == '_')) {
                return false;
            }
        } else {
            if(s[i] == '_') {
                return false;
            }
        }
    }
    return true;
}

string toJava(string s) {
    string newS = "";
    int n = s.length();
    for(int i = 0 ; i < n ; i++) {
        if(s[i] == '_') {
            newS.push_back(toupper(s[i + 1]));
            i++;
        } else {
            newS.push_back(s[i]);
        }
    }
    return newS;
}

string toCPP(string s) {
    string newS = "";
    int n = s.length();
    for(int i = 0 ; i < n ; i++) {
        if(isupper(s[i])) {
            newS.push_back('_');
            newS.push_back(tolower(s[i]));
        } else {
            newS.push_back(s[i]);
        }
    }
    return newS;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    ifstream file("java_c.in");
	if(file) freopen("java_c.in", "rt", stdin);
	ofstream output("java_c.out");
    string s;
    cin >> s;
    if(val(s)) {
        if(s.find("_") != string::npos) {
            output << toJava(s);
        } else {
            output << toCPP(s);
        }
    } else {
        output << "Error!";
    }
    output.close();
    return 0;
}

