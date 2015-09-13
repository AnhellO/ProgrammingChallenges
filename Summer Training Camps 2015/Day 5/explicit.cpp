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
    ifstream file("explicit.in");
	if(file) freopen("explicit.in", "rt", stdin);
	ofstream output("explicit.out");
    int arr[10];
    for(int i = 0 ; i < 10 ; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + 10, greater<int>());
    int cont = 0;
    for(int i = 1 ; i <= 10 ; i++) {
        if(arr[i - 1]) {
            cont += 10 - i;
            cont += ((10 - i - 1) * (10 - i)) / 2;
        }
    }
    output << ((cont % 2) ? "1\n" : "0\n");
    output.close();
    return 0;
}

