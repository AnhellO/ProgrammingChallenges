#include <cstdio>
using namespace std;

typedef long long int lli;
lli n, m, a;

int main()
{
	scanf("%lld %lld %lld", &n, &m, &a);
	printf("%lld\n", ((n + a - 1) / a) * ((m + a - 1) / a));
	return 0;
}