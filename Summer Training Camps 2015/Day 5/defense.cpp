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
    ifstream file("defense.in");
	if(file) freopen("defense.in", "rt", stdin);
	ofstream output("defense.out");

    vector<int> ver, hor;
    int w, h, n, aux1, aux2, maxW = 0, maxH = 0;
    cin >> w >> h >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> aux1 >> aux2;
        ver.push_back(aux1);
        hor.push_back(aux2);
    }
    ver.push_back(0);
    ver.push_back(w+1);
    hor.push_back(0);
    hor.push_back(h+1);
    sort(ver.begin(), ver.end());
    sort(hor.begin(), hor.end());
    for(int i = 0 ; i <= n ; i++){
        if(ver[i+1] - ver[i] > maxW){
            maxW = ver[i+1] - ver[i];
        }
        if(hor[i+1] - hor[i] > maxH){
            maxH = hor[i+1] - hor[i];
        }
    }
    output << (maxH-1) * (maxW-1) << "\n";

    output.close();
    return 0;
}
