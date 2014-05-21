#include <cstdio>
using namespace std;

int K, N, val, sum = 0;

int main() 
{
	scanf("%d %d", &K, &N);
	while(K--)
	{
		scanf("%d", &val);
		sum += (val / N);
	}
	printf("%d\n", sum);
	return 0;
}