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

int main() {
	int T;
	scanf("%d", &T);
	for(int k = 1 ; k <= T ; k++) {
		printf("Case %d: ", k);
		vector<string> v(27), v2(25);
		for(int i = 0 ; i < 27 ; i++) {
			char c[2];
			scanf("%s", &c);
			v[i] = c;
		}
		for(int i = 0 ; i < 25 ; i++) {
			char c[2];
			scanf("%s", &c);
			v2[i] = c;
		}
		int Y = 0;
		for(int i = 0 ; i < 3 ; i++) {
			string aux = v.back();
			if(isalpha(aux[0])) {
				Y += 10;
				v.pop_back();
			} else {
				Y += (aux[0] - '0');
				for(int j = 0 ; j <= 10 - (aux[0] - '0') ; j++) {
					v.pop_back();
				}
			}
			//cout << aux << ' ' << v.size() << ' ' << Y << endl;
		}
		v.insert(v.end(), v2.begin(), v2.end());
		printf("%c%c\n", v[Y - 1][0], v[Y - 1][1]);
		//printf("%c%c %c%c\n", v[26][0], v[26][1], v2[24][0], v2[24][1]);
	}
	return 0;
}