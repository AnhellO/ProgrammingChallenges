#include <cstdio>
#include <algorithm>
using namespace std;

int N, i, cont = 0;

int main() 
{
	scanf("%d", &N);
	int permutation[N];
	for(i = 0 ; i < N ; i++) scanf("%d", &permutation[i]);
	sort(permutation, permutation + N);
	for(i = 0 ; i < N - 1 ; i++)
		if(permutation[i] == permutation[i + 1] || permutation[i] > N) cont++;
	if(permutation[N - 1] > N) cont++;
	printf("%d\n", cont);
	return 0;
}