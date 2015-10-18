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
typedef vector<string> vs;
typedef vector<vi> vvi;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef vector<vii> vvii;
typedef map<int, int> mii;
typedef map<char, int> mci;
typedef map<string, int> msi;
typedef map<int, ii> miii;
typedef map<string, string> mss;
typedef map<string, vs> msvs;
typedef long long int lli;
typedef unsigned long long int ulli;

ulli gcd(ulli a, ulli b) {
	return (b == 0 ? a : gcd(b, a % b));
}

ulli lcm(ulli a, ulli b) {
	return (a * (b / gcd(a, b)));
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	ulli v1, d1, v2, d2, nCase = 0;
	while(cin >> v1 >> d1 >> v2 >> d2 && (v1 && d1 && v2 && d2)) {
		cout << "Case #" << ++nCase << ": ";
		ulli t1 = d1 * v2, t2 = d2 * v1;
		//cout << fixed << setprecision(4) << t1 << ' ' << t2 << '\n';
		if(t1 < t2) {
			cout << "You owe me a beer!\nAvg. arrival time: ";
		} else {
			cout << "No beer for the captain.\nAvg. arrival time: ";
		}
		v1 *= 2;
		v2 *= 2;
		ulli den = lcm(max(v1, v2), min(v1, v2));
		ulli aux = ((den / v1) * d1) + ((den / v2) * d2);
		ulli temp = gcd(max(den, aux), min(aux, den));
		while(temp != 1) {
			den /= temp;
			aux /= temp;
			temp = gcd(max(den, aux), min(aux, den));
		}
		if(aux % den == 0) {
			cout << aux / den << '\n';
		} else {
			cout << aux << '/' << den << '\n';
		}
	}
	return 0;
}