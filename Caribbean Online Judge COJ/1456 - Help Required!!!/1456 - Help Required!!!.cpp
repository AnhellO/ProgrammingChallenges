#include <cstdio>
#include <algorithm>
using namespace std;

int N, i;

int main()
{
	scanf("%d", &N);
	int elements[N];
	for(i = 0 ; i < N ; i++) scanf("%d", &elements[i]);
	sort(elements, elements + N);
	for(i = 1 ; i < N - 1 ; i++)
		if(elements[i] != elements[i + 1] && elements[i] != elements[i - 1]) break;
	printf("%d\n", elements[i]);
	return 0;
}