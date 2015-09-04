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

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int T, PA, PB;
	double G1, G2;
	cin >> T;
	while(T--) {
		cin >> PA >> PB >> G1 >> G2;
		int i;
		G1 /= 100;
		G2 /= 100;
		for(i = 1 ; PA < PB ; i++) {
			PA += (PA * G1);
			PB += (PB * G2);
			if(PA > PB) {
				break;
			}
		}
		if(i > 100) {
			cout << "Mais de 1 seculo.\n";
		} else {
			cout << i << " anos.\n";
		}
	}
	return 0;
}