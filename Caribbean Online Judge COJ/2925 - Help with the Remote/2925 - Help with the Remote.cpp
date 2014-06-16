#include <cstdio>
using namespace std;

int T, A, B, cont;

int main() 
{
	scanf("%d", &T);
	while(T--)
	{
		cont = 0;
		scanf("%d %d", &A, &B);
		if(A == B) {printf("%d\n", 0); continue;}
		while(A != B)
		{
			if(A < B) cont++, A++;
			else A /= 2, cont++;
		}
		printf("%d\n", cont);
	}
	return 0;
}