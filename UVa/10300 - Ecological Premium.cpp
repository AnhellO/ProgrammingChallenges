#include <bits/stdc++.h>
using namespace std;

int n, f, a, b, c;

int main()
{
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d", &f);
		int sum = 0;
		while(f--)
		{
			scanf("%d %d %d", &a, &b, &c);
			sum += (a * c);
		}
		printf("%d\n", sum);
	}
	return 0;
}