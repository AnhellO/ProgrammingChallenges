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
#define INF 1000000000000
#define MAX 101
using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int T;
	string line;
	cin >> T;
	getline(cin, line);
	getline(cin, line);
	while(T--) {
		stack<string> st;
		while(getline(cin, line) && !line.empty()) {
			if(isdigit(line[0])) {
				cout << line;
			} else if(line == "(") {
				st.push(line);
			} else if(line == "+" || line == "-") {
				while(!st.empty() && (st.top() == "+" || st.top() == "-" || st.top() == "*" || st.top() == "/")) {
					cout << st.top();
					st.pop();
				}
				st.push(line);
			} else if(line == "*" || line == "/") {
				while(!st.empty() && (st.top() == "*" || st.top() == "/")) {
					cout << st.top();
					st.pop();
				}
				st.push(line);
			} else if(line == ")") {
				while(st.top() != "(") {
					cout << st.top();
					st.pop();
				}
				st.pop();
			}
		}
		while(!st.empty()) {
			cout << st.top();
			st.pop();
		}
		cout << ((T) ? "\n\n" : "\n");
	}
	return 0;
}