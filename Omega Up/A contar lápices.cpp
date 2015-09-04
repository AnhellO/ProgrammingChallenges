#include <cstdio>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int n, k, i, val, cont = 0;

int main()
{
	scanf("%d %d", &n, &k);
	FOR(i, 0, n, 1)
	{
		scanf("%d", &val);
		if(val == k) cont++;
	}
	printf("%d\n", cont);
	return 0;
}