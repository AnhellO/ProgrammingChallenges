#include <cstdio>
#define FOR(i, a, b, c) for(i = a ; i <= b ; i += c)
using namespace std;

int n, i, cont;

int main() 
{
	while(scanf(" 1/%d ", &n) != EOF)
	{
		cont = 0;
		FOR(i, n + 1, 2 * n, 1)
			if((n * i) % (i - n) == 0)
				cont++;
		printf("%d\n", cont);
	}
	return 0;
}