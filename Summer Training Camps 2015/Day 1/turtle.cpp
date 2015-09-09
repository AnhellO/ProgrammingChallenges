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
#define MAX 52
using namespace std;

int main() {
	ifstream file("turtle.in");
	if(file) freopen("turtle.in", "rt", stdin);
	int n, m;
	cin >> n >> m;
	int a[n][m];
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++){
			cin >> a[i][j];
		}
	}
	int f[n][m];
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++){
			if(i == 0 && j == 0){
				f[i][j] = a[i][j];
			}
			else if(i == 0){
				f[i][j] = f[i][j-1] + a[i][j];
			}
			else if(j == 0){
				f[i][j] = f[i-1][j] + a[i][j];
			}
			else{
				f[i][j] = max(f[i][j-1], f[i-1][j]) + a[i][j];
			}
		}
	}
	ofstream output("turtle.out");
    output << f[n - 1][m - 1] << '\n';
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < m ; j++) {
            cout << f[i][j] << ' ';
        }
        cout << '\n';
    }
    output.close();
	return 0;
}
