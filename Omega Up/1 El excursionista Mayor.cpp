#include <cstdio>
#include <algorithm>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int n, i;

int main()
{
	scanf("%d", &n);
	int falmos[n];
	FOR(i, 0, n, 1)
	{
		scanf("%d", &falmos[i]);
	}
	sort(falmos, falmos + n);
	printf("%d\n", falmos[n - 1]);
	return 0;
}