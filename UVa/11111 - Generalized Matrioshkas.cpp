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
#define MAX 1000000;
using namespace std;

stack<pair<int, int> > st;

int _abs(int n) {
	return n * -1;
}

void clearStack() {
	while(!st.empty()) {
		st.pop();
	}
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	string s;
	while(getline(cin, s)) {
		istringstream ss(s);
        int num;
        bool flag1 = false, flag2 = true;
        while(ss >> num && flag2) {
        	flag1 = true;
        	if(num < 0) {
        		num = _abs(num);
        		if(!st.empty()) {
        			if(st.top().second <= num) {
        				flag2 = false;
        			} else {
        				st.top().second -= num;
        			}
        		}
        		st.push(make_pair(num, num));
        	} else {
        		if(st.empty() || st.top().first != num) {
        			flag2 = false;
        		} else {
        			st.pop();
        		}
        	}
        }
        if(!flag1 || !st.empty()) {
        	flag2 = false;
        }
        cout << ((flag2) ? ":-) Matrioshka!\n" : ":-( Try again.\n");
        clearStack();
	}
	return 0;
}