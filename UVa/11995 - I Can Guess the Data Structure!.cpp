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
    //ifstream file("icanguess.txt");
	//if(file) freopen("icanguess.txt", "rt", stdin);
	//ofstream output("icanguess.out");
    int n;
    while(cin >> n) {
        stack<int> si;
        queue<int> qi;
        priority_queue<int> pqi;
        bool fs = true, fq = true, fpq = true;
        for(int i = 0 ; i < n ; i++) {
            int a, b;
            cin >> a >> b;
            if(a == 1) {
                si.push(b);
                qi.push(b);
                pqi.push(b);
            } else {
                if(!si.empty() && si.top() == b) {
                    si.pop();
                } else {
                    fs = false;
                }
                if(!qi.empty() && qi.front() == b) {
                    qi.pop();
                } else {
                    fq = false;
                }
                if(!pqi.empty() && pqi.top() == b) {
                    pqi.pop();
                } else {
                    fpq = false;
                }
            }
        }
        if(!fs && !fq && !fpq) {
            cout << "impossible\n";
        } else if(fs && !fq && !fpq) {
            cout << "stack\n";
        } else if(!fs && fq && !fpq) {
            cout << "queue\n";
        } else if(!fs && !fq && fpq) {
            cout << "priority queue\n";
        } else {
            cout << "not sure\n";
        }
    }
    //output.close();
    return 0;
}
