#include <cstdio>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
#define LEC(t) while(t--)
using namespace std;

int t, n, i, cont, j;
double av;

int main() 
{
	scanf("%d", &t);
	LEC(t)
	{
		scanf("%d", &n);
		av = 0.0;
		cont = j = 0;
		int maths[n], phys[n];
		FOR(i, 0, n * 2, 1)
		{
			if(i < n)
			{
				scanf("%d", &maths[i]);
				av += (double)maths[i];
			}
			else
			{
				scanf("%d", &phys[j]);
				av += (double)phys[j];
				j++;
			}
		}
		av /= (double)n;
		FOR(i, 0, n, 1)
		{
			if((double)maths[i] + (double)phys[i] < av)
				cont++;
		}
		printf("%d\n", cont);
	}
	return 0;
}