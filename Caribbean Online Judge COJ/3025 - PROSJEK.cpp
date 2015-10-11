#include <cstdio>
using namespace std;
 
int N, i, j;
 
int main()
{
	scanf("%d", &N);
	unsigned long long int b[N], a[N];
	for(i = 0 ; i < N ; i++) scanf("%llu", &b[i]);
	a[0] = b[0];
	for(i = 1 ; i < N ; i++)
	{
		b[i] *= (i + 1);
		for(j = 0 ; j < i ; j++) b[i] -= a[j];
		a[i] = b[i];
	}
	printf("%llu", a[0]);
	for(i = 1 ; i < N ; i++) printf(" %llu", a[i]);
	printf("\n");
	return 0;
}