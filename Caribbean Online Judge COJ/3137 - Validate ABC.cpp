#include <bits/stdc++.h>
using namespace std;

int T, A, B, C;

int main() {
	scanf("%d", &T);
	while(T--) {
		scanf("%d %d %d", &A, &B, &C);
		if(B) printf((A + B == C || A - B == C || A * B == C || A / B == C || A % B == C) ? "YES\n" : "NO\n");
		else printf((A + B == C || A - B == C || A * B == C) ? "YES\n" : "NO\n");
	}
	return 0;
}