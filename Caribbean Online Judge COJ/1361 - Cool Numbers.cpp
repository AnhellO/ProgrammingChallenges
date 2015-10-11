#include <cstdio>
using namespace std;

int a, b, i, j, cont, cool[] = {1, 64, 729, 4096, 15625, 46656, 117649, 262144, 531441,
						1000000, 1771561, 2985984, 4826809, 7529536, 11390625,
						16777216, 24137569, 34012224, 47045881, 64000000, 85766121, 113379904};
bool flag;

int main()
{
	while(scanf("%d %d", &a, &b) != EOF)
	{
		cont = flag = 0;
		for(i = 0 ; i < 22 ; i++)
		{
			if(cool[i] >= a)
			{
				for(j = i ; j < 22 ; j++)
				{
					if(cool[j] > b)
					{
						flag = 1;
						break;
					}
					cont++;
				}
			}
			if(flag) break;
		}
		printf("%d\n", cont);
	}
	return 0;
}