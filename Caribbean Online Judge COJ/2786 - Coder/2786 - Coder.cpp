#include <cstdio>
using namespace std;

int N, i;

int main() 
{
	scanf("%d", &N);
	if(N == 1)
		printf("%d\n", 1);
	else if(N == 2)
		printf("%d\n", 2);
	else if(N == 3)
		printf("%d\n", 5);
	else
	{
		printf("%d\n", (N % 2) ? ((N * N) / 2) + 1 : (((N - 1) * (N - 1)) / 2) + N);
	}
	return 0;
}