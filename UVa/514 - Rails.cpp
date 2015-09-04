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
#define MAX 1010
using namespace std;

int coaches[MAX];
stack<int> s;

void cleanStack() {
	while(!s.empty()) {
		s.pop();
	}
}

int main() {
	int N;
	while(scanf("%d", &N) && N) {
		while(scanf("%d", &coaches[1]) && coaches[1])
		{
			for(int i = 2 ; i <= N ; i++) {
				scanf("%d", &coaches[i]);
			}
			int aux = 1;
			for(int i = 1 ; i <= N ; i++) {
				if(coaches[aux] == i) {
					aux++;
				} else {
					s.push(i);
				}
				while(!s.empty() && s.top() == coaches[aux]) {
					s.pop();
					aux++;
				}
			}
			printf((s.empty()) ? "Yes\n" : "No\n");
			cleanStack();
		}
		printf("\n");
	}
	return 0;
}