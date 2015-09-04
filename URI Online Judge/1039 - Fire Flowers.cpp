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

struct Circle {
	int r, x, y;
};

double euclideanDistance(int x1, int x2, int y1, int y2) {
	return sqrt(pow((double)x2 - (double)x1, 2) + pow((double)y2 - (double)y1, 2));
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	Circle hunter, flower;
	while(cin >> hunter.r >> hunter.x >> hunter.y >> flower.r >> flower.x >> flower.y) {
		if(hunter.r * 2 >= euclideanDistance(hunter.x, flower.x, hunter.y, flower.y) + flower.r + hunter.r) {
			cout << "RICO\n";
		} else {
			cout << "MORTO\n";
		}
	}
	return 0;
}