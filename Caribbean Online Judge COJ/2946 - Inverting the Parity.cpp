#include <cstdio>
using namespace std;
 
unsigned int T, N;
 
int main()
{
	scanf("%u", &T);
	while(T--)
	{
		scanf("%u", &N);
		if(N % 2)
		{
			while(N % 2) N *= 2;
			printf("%u\n", N);
		}
		else
		{
			while(N % 2 == 0) N /= 2;
			printf("%u\n", N);
		}
	}
	return 0;
}