#include <cstdio>
using namespace std;

int N, K, S, T, R, i, cont, total, minutes;

int main() 
{
	scanf("%d %d", &N, &K);
	while(K--)
	{
		scanf("%d %d %d", &S, &T, &R);
		total = T;
		cont = minutes = 0;
		while(cont < N)
		{
			total = T;
			while(total-- && cont < N)
			{
				cont += S;
				minutes++;
			}
			if(cont < N) minutes += R;
		}
		printf("%d\n", minutes);
	}
	return 0;
}