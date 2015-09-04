#include <bits/stdc++.h>
using namespace std;

int T, N;

int lastDigit(int n)
{
	long long ans = 1;
	for(int i = 1 ; i <= n ; i++) {
		ans *= i;
		while(ans % 10 == 0) ans /= 10;
		ans %= 1000000000;
	}
	return ans % 10;
}

int main() {
	scanf("%d", &T);
	while(T--) {
		scanf("%d", &N);
		printf("%d\n", lastDigit(N));
	}
	return 0;
}