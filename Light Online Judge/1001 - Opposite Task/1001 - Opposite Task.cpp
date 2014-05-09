#include <cstdio>
using namespace std;

int T, total, c1, c2;

int main() 
{
	scanf("%d", &T);
	while(T--)
	{
		scanf("%d", &total);
		c1 = 0;
		c2 = total;
		while(c2 > 10)
			c2--, c1++;
		printf("%d %d\n", c1, c2);
	}
	return 0;
}