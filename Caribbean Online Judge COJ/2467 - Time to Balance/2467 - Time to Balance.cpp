#include <cstdio>
using namespace std;

int M, D, cont;

int main() 
{
	while(scanf("%d %d", &M, &D) != EOF && (M && D))
	{
		cont = 0;
		if(M >= D)
		{
			printf("%d\n", 0);
			continue;
		}
		else
		{
			while(D > M)
			{
				if(D % 2) D--, cont++;
				else (D / 2 >= M) ? (D /= 2, cont++) : (D--, cont++);
			}
		}
		printf("%d\n", cont);
	}
	return 0;
}