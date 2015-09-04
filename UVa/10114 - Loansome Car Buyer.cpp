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
	int M, D;
	double P, L;
	while(cin >> M && M >= 0) {
		cin >> P >> L >> D;
		map<int, double> depreciations;
		while(D--) {
			int m;
			double d;
			cin >> m >> d;
			depreciations[m] = d;
		}
		double aux1 = L, aux2 = L, past = depreciations[0];
		aux2 += P;
		aux2 -= (aux2 * depreciations[0]);
                if(aux2 > aux1) {
                        cout << "0 months\n";
                        continue;
                }
		double payment = L / (double)M;
		//cout << aux1 << ' ' << aux2 << '\n';
		int i;
		for(i = 1 ; i <= M ; i++) {
			aux1 -= payment;
			map<int, double>::iterator it = depreciations.find(i);
			if(it != depreciations.end()) {
				past = depreciations[i];
			}
			aux2 -= (aux2 * past);
			//cout << past << ' ' << aux1 << ' ' << aux2 << '\n';
			if(aux2 > aux1) {
				break;
			}
		}
		cout << i << ((i == 1) ? " month\n" : " months\n");
	}
	return 0;
}