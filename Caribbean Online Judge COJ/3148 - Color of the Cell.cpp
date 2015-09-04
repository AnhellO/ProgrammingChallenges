#include <bits/stdc++.h>
using namespace std;

int T;
char c[2];

int main() {
	scanf("%d", &T);
	while(T--) {
		scanf("%s", &c);
		if(c[0] % 2) {
			if(c[1] % 2) {
				printf("WHITE\n");
			}
			else {
				printf("BLACK\n");
			}
			continue;
		}
		else {
			if(c[1] % 2) {
				printf("BLACK\n");
			}
			else {
				printf("WHITE\n");
			}
			continue;
		}
	}
	return 0;
}