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

vi p;
int nSets;
bool flagLoop = false;

void initSet(int i ){
    p.assign(i+1, 0);
    for(int j = 1 ; j <= i ; j++){
        p[j] = j;
    }
    nSets = i;
}

int findSet(int i) {
    return (p[i] == i) ? i : (p[i] = findSet(p[i]));
}

bool isSameSet(int i, int j) {
    return findSet(i) == findSet(j);
}

void unionSet(int i, int j) {
    if(isSameSet(i,j)){
        //cout << i << ' ' << j << ' ' << isSameSet(i, j) << '\n';
        flagLoop = true;
    }
    else{
        nSets--;
    }
    p[findSet(i)] = findSet(j);
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    ifstream file("tree.in");
	if(file) freopen("tree.in", "rt", stdin);
	ofstream output("tree.out");
    int n, m;
    cin >> n >> m;
    int a, b;
    initSet(n);
    for(int i = 0 ; i < m ; i++) {
        cin >> a >> b;
        unionSet(a, b);
    }
    if(flagLoop) {
        output << "NO\n";
    } else if(m != n - 1) {
        output << "NO\n";
    } else if(nSets != 1) {
        output << "NO\n";
    } else {
        output << "YES\n";
    }
    output.close();
    return 0;
}

