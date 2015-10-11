#include <cstdio>
#include <algorithm>
using namespace std;

#define ciclo(i, a, b) for(i = a ; i < b ; i++)
int n, i, bag, cont1, cont2, sum;

int main()
{
	while(scanf("%d", &n) != EOF)
	{
		cont1 = cont2 = sum = 0;
		ciclo(i, 0, n)
		{
			scanf("%d", &bag);
			sum += bag;
			if(bag % 2 == 0)
				cont1++;
			else
				cont2++;
		}
	if(cont1 > 0 || cont2 > 0)
        {
            printf("%d\n", (sum % 2 == 0) ? cont1 : cont2);
        }
		else if((cont1 == 0 || cont2 == 0) && sum % 2 == 0)
            printf("%d\n", n);
        else if((cont1 == 0 || cont2 == 0) && sum % 2 != 0)
            printf("%d\n", 0);
	}
	return 0;
}