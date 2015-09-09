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
#define MAX 102
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

int adjacency[MAX][MAX];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    ifstream file("adjacency.in");
	if(file) freopen("adjacency.in", "rt", stdin);
	ofstream output("adjacency.out");
    int n, m;
    cin >> n >> m;
    if(m == 0) {
        output << "0\n";
        return 0;
    }
    int a, b;
    while(m--) {
        cin >> a >> b;
        adjacency[a - 1][b - 1] = 1;
        adjacency[b - 1][a - 1] = 1;
    }
    for(int i = 0 ; i < n ; i++) {
        output << adjacency[i][0];
        for(int j = 1 ; j < n; j++) {
            output << ' ' << adjacency[i][j];
        }
        output << '\n';
    }
    output.close();
    return 0;
}
