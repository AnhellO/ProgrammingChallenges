#include <cstdio>
#include <algorithm>
using namespace std;

int N, charges, i;

int main()
{
	scanf("%d", &N);
	int towers[N];
	for(i = 0 ; i < N ; i++) scanf("%d", &towers[i]);
	sort(towers, towers + N);
	charges = N;
	for(i = 0 ; i < N ; i++) charges = min(charges, towers[i] + (N - i - 1));
	printf("%d\n", charges);
	return 0;
}