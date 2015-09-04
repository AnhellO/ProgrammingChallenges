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

vector<string> dictionary, relatives;

bool compare(string s1, string s2) {
	int n1 = s1.length();
	int n2 = s2.length();
	if(n1 != n2) {
		return false;
	}
	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());
	for(int i = 0 ; i < n1 ; i++) {
		if(tolower(s1[i]) != tolower(s2[i])) {
			return false;
		}
	}
	return true;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	string s;
	while(cin >> s && s != "#") {
		dictionary.push_back(s);
	}
	int n = dictionary.size();
	for(int i = 0 ; i < n ; i++) {
		bool flag = true;
		string s1 = dictionary[i];
		for(int j = 0 ; j < n ; j++) {
			if(i == j) {
				continue;
			}
			string s2 = dictionary[j];
			transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
			transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
			if(compare(s1, s2)) {
				flag = false;
				break;
			}
		}
		if(flag) {
			relatives.push_back(dictionary[i]);
		}
	}
	sort(relatives.begin(), relatives.end());
	for(int i = 0 ; i < relatives.size() ; i++) {
		cout << relatives[i] << '\n';
	}
	return 0;
}