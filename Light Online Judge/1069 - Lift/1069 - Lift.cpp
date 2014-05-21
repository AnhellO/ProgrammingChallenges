#include <cstdio>
#include <cstdlib>
using namespace std;

int T, N, L, i;

int main() 
{
	scanf("%d", &T);
	for(i = 1 ; i <= T ; i++)
	{
		scanf("%d %d", &N, &L);
		printf("Case %d: %d\n", i, 19 + ((4 * abs(L - N)) + (4 * N)));
	}
	return 0;
}