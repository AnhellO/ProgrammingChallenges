#include <cstdio>
using namespace std;

#define ciclo(i, a, b) for(i = a ; i < b ; i++)
int n, k, i, j, val, dif;

int main() 
{
	scanf("%d", &n);
	ciclo(i, 0, n)
	{
		scanf("%d", &k);
		dif = 0;
		ciclo(j, 0, k)
		{
			scanf("%d", &val);
			if(val > dif)
				dif = val;
		}
		printf("Case %d: %d %d\n", i + 1, j + 1, dif + 1);
	}
	return 0;
}