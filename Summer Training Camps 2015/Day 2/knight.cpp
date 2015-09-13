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
typedef vector<vi> vivi;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef vector<vii> vvii;
typedef map<int, int> mii;
typedef map<char, int> mci;
typedef map<string, int> msi;
typedef map<int, ii> miii;

int main() {
	int n, m;

	cin.tie(0);
	ios::sync_with_stdio(0);
	ifstream file("knight.in");
	if(file) freopen("knight.in", "rt", stdin);
	ofstream output("knight.out");

	cin >> n >> m;
	int f[n][m];
	for (int i = 0 ; i < n; i++){
			for(int j = 0 ; j < m ; j++){
				f[i][j] = 0;
			}
	}
	f[0][0] = 1;
	for (int i = 0 ; i < n; i++){
		for(int j = 0 ; j < m ; j++){
			if(i == 1 && j > 1){
				f[i][j] = f[i-1][j-2];
			}
			else if(j == 1 && i > 1){
				f[i][j] = f[i-2][j-1];
			}
			else if(j > 1 && i > 1){
				f[i][j] = f[i-1][j-2] + f[i-2][j-1];
			}
		}
	}
	/*for (int i = 0 ; i < n; i++){
			for(int j = 0 ; j < m ; j++){
				cout << f[i][j] << " ";
			}
			cout << "\n" ;
	}*/
	output << f[n-1][m-1] << "\n";

	output.close();
	return 0;
}
