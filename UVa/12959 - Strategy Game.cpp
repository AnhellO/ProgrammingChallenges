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
    
    int J, r;
    
    while(cin >> J >> r){
    	vector<int> v(J, 0);
    	for(int i = 0 ; i < r ; i++) {
    		for(int j = 0 ; j < J ; j++) {
    			int a;
    			cin >> a;
    			v[j] += a;
    		}
    	}
    	int may = 0, index;
    	for(int i = 0 ; i < v.size() ; i++){
    		if(may <= v[i]) {
    			may = v[i];
    			index = i;
    		}
    	}
    	cout << index + 1 << '\n';
    }

    return 0;
}