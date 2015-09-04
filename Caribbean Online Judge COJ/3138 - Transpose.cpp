#include <bits/stdc++.h>
using namespace std;

int T, m, n;

int main() {
	scanf("%d", &T);
	while(T--) {
		scanf("%d %d", &m, &n);
		int matrix[m][n];
		for(int i = 0 ; i < m ; i++) {
			for(int j = 0 ; j < n ; j++) {
				scanf("%d", &matrix[i][j]);
			}
		}
		for(int i = 0 ; i < n ; i++) {
			for(int j = 0 ; j < m ; j++) {
				if(!j) printf("%d", matrix[j][i]);
				else printf(" %d", matrix[j][i]);
			}
			printf("\n");
		}
	}
	return 0;
}