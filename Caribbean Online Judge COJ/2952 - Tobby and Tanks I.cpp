#include <cstdio>
using namespace std;
 
int n, q, k, i, j, tanks[1001];
 
int main()
{
	while(scanf("%d %d", &n, &k) != EOF)
	{
		for(i = 0 ; i < n ; i++) scanf("%d", &tanks[i]);
		for(i = 0 ; i < k ; i++)
		{
			scanf("%d", &q); q--;
			for(j = 1 ; j < n ; j++)
			{
				if(q - tanks[j] >= 0) q -= tanks[j];
				else break;
			}
			(!i) ? printf("%d", j) : printf(" %d", j);
		}
		printf("\n");
	}
	return 0;
}
