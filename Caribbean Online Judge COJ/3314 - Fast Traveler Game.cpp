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
#include <functional>
#define INF 1000000000000
#define MAX 1000000
#define MOD 10000007
#define len(arr) (sizeof(arr)/sizeof(arr[0]))
using namespace std;

typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef vector<int> vi;
typedef vector<vi> vvi;
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
	int T;
	cin >> T;
	while(T--) {
		int n, s, d, aux, plus, index = 0;
		vector<int> res;
		cin >> n >> s >> d;
		map<int, int> m;
		for(int i= 0 ; i < n ; i++){
			m[i] = 0;
		}
		vector<int> arr(s);
		for(int i = 0 ; i < s ; i++){
			cin >> arr[i];
		}
		for(int i = 0 ; i < d ; i++){
			cin >> aux;
			while(m[(index%n)] == s-1){
				index = (index+1)%n;
			}
			//cout << "jugador " << (index%n) << " antes " << m[(index%n)] << " ahora " <<m[(index%n)] + aux + arr[m[(index%n)] + aux] << '\n';
			m[(index%n)] += (aux + arr[m[(index%n)] + aux]);
			//cout << "m ahora " << m[(index%n)] << '\n';
			if(m[(index%n)] == s-1){
				//cout << "pushed " << (index%n) << '\n';
				res.push_back((index%n));
			}
			index = (index+1)%n;
		}
		
		if(res.empty()){
			cout << -1 << '\n';
		}
		else{
			cout << res[0]+1;
			for(int i= 1 ; i < res.size() ; i++){
				cout << ' ' << res[i]+1;
			}
			cout << '\n';
		}
	}
	return 0;
}