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
using namespace std;

bool compare(char a, char b){
	if(tolower(a) == tolower(b)){
		return a < b;
	}
	return tolower(a) < tolower(b);
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int T;
	string s;
	cin >> T;
	while(T--) {
		cin >> s;
		sort(s.begin(), s.end(), compare);
		do {
			cout << s << '\n';
		} while(next_permutation(s.begin(), s.end(), compare));
	}
	return 0;
}