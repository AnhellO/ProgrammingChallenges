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

int s[MAX][MAX];

int main() {
	ifstream file("yield.in");
	if(file) freopen("yield.in", "rt", stdin);
	double a, b;
	cin >> a >> b;
	ofstream output("yield.out");
    output << setprecision(4) << a + b << '\n';
    output.close();
	return 0;
}
