#include <cstdio>
using namespace std;

int T, i, c1, c2;

int main() 
{
	scanf("%d", &T);
	for(i = 0 ; i < T ; i++)
	{
		scanf("%d %d", &c1, &c2);
		printf("Case %d: %d\n", i + 1, c1 + c2);
	}
	return 0;
}