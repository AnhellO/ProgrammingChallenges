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
#include <list>
#include <iomanip>
#include <utility>
using namespace std;

string toString(int n) {
	stringstream ss;
	ss << n;
	return ss.str();
}

int toInt(string s) {
	int n;
	stringstream ss;
	ss << s;
	ss >> n;
	return n;
}

int main() {
	ios_base::sync_with_stdio(0);
	int T, n, m;
	string move;
	cin >> T;
	while(T--) {
		cin >> n;
		int x = 0;
		vector<string> pastMoves;
		for(int i = 0 ; i < n ; i++) {
			cin >> move;
			if(move == "SAME") {
				cin >> move >> m;
				move = pastMoves[m - 1];
				while(move != "LEFT" && move != "RIGHT") {
					int index = toInt(move);
					move = pastMoves[index - 1];
				}
				x = (move == "LEFT") ? x - 1 : x + 1;
				pastMoves.push_back(toString(m));
			} else {
				x = (move == "LEFT") ? x - 1 : x + 1;
				pastMoves.push_back(move);
			}
		}
		printf("%d\n", x);
	}
	return 0;
}