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
	int T, a, b, c;
	scanf("%d", &T);
	while(T--) {
		map<int, int> m;
		bool flag = false;
		for(int i = 1 ; i <= 100 ; i++) {
			m[i] = 0;
		}
		scanf("%d %d %d", &a, &b, &c);
		vector<int> players(a + 1, 1);
		while(b--) {
			int aux1, aux2;
			scanf("%d %d", &aux1, &aux2);
			m[aux1] = aux2;
		}
		int cont = 1, cont2 = 0;
		int rolls = c;
		while(rolls--) {
			if(cont == players.size()) {
				cont = 1;
			}
			int dice;
			scanf("%d", &dice);
			cont2++;
			players[cont] += dice;
			if(m[players[cont]] != 0) {
				players[cont] = m[players[cont]];
			}
			if(players[cont] >= 100) {
				flag = true;
				for(int i = 1 ; i < players.size() ; i++) {
					if(players[i] > 100) {
						printf("Position of player %d is 100.\n", i);
						continue;
					}
					printf("Position of player %d is %d.\n", i, players[i]);
				}
				int garbage;
				while(cont2 < c) {
					scanf("%d", &garbage);
					cont2++;
				}
				break;
			}
			cont++;
		}
		if(!flag) {
			for(int i = 1 ; i < players.size() ; i++) {
				printf("Position of player %d is %d.\n", i, players[i]);
			}
		}
	}
	return 0;
}