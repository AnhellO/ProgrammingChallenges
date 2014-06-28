#include <cstdio>
using namespace std;

int N, A, B, C, min = 1000000;;

int main()
{
	scanf("%d", &N);
	while(N--)
	{
		scanf("%d %d %d", &A, &B, &C);
		if(A + B > C && A + C > B && B + C > A)
			if((A + B + C) < min) min = A + B + C;
	}
	printf("%d\n", min);
	return 0;
}