#include <cstdio>
#include <algorithm>
#include <vector>
#define VECTOR vector<int>
#define FOR1(i, a, b, c) for(i = a ; i < b ; i += c)
#define FOR2(i, a, b, c) for(i = a - 3 ; i >= b ; i -= c)
using namespace std;

int t, n, i, disc;

int main() 
{
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		VECTOR shop(n);
		disc = 0;
		FOR1(i, 0, n, 1)
		{
			scanf("%d", &shop[i]);
		}
		sort(shop.begin(), shop.end());
		FOR2(i, n, 0, 3)
		{
			disc += shop[i];
		}
		printf("%d\n", disc);
	}
	return 0;
}