#include <bits/stdc++.h>
using namespace std;

int T, n, m;

int main()
{
	scanf("%d", &T);
	while(T--)
	{
		scanf("%d %d", &n, &m);
		printf("%d\n", (n / 3) * (m / 3));
	}
	return 0;
}