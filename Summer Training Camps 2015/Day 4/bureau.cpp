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

vector<int> laws(100001, 1);
int arr[100001];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    ifstream file("bureau.in");
	if(file) freopen("bureau.in", "rt", stdin);
	ofstream output("bureau.out");
    int n, i;
    string s;
    cin >> n;
    //cout << laws;
    for(int j = 0 ; j < n ; j++) {
        cin >> s;
        if(s == "declare") {
            arr[j] = j;
        } else {
            cin >> i;
            arr[j] = i - 1;
        }
    }
    int cont = 0, aux = 0;
    for(int i = n-1 ; i >= 0 ; i--){
        if(laws[i] > 0){
            if(arr[i] != i){
                laws[arr[i]]--;
            }
            cont++;
        }
    }
    for(int i = 0 ; i < n ; i++) {
        if(laws[i] > 0) {
            aux = i;
            break;
        }
    }
    output << cont << '\n';
    output << aux + 1;
    for(int i = aux + 1 ; i < n ; i++) {
        if(laws[i]>0) {
            output << ' ' << i + 1;
        }
    }
    output << '\n';
    output.close();
    return 0;
}
