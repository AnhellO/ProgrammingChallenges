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

bool compare(char a, char b) {
	return a > b;
}

int main() {
	string s;
	while(cin >> s && s != "#") {
		string aux = s;
		sort(aux.begin(), aux.end(), &compare);
		if(s == aux) {
			cout << "No Successor\n";
		} else {
			next_permutation(s.begin(), s.end());
			cout << s << '\n';
		}
	}
	return 0;
}