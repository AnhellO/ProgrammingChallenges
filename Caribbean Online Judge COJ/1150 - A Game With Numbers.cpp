#include <cstdio>
using namespace std;

int N;

int main()
{
	while(scanf("%d", &N) != EOF)
	{
		(N % 10) ? printf("1\n%d\n", N % 10) : printf("2\n");
	}
	return 0;
}