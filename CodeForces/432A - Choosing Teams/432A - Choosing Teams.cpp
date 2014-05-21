#include <cstdio>
#include <algorithm>
using namespace std;

int N, K, i;

int main() 
{
	scanf("%d %d", &N, &K);
	int members[N];
	for(i = 0 ; i < N ; i++) scanf("%d", &members[i]);
	sort(members, members + N);
	for(i = N - 1 ; i >= 0 ; i--)
		if(members[i] + K < 6)
			break;
	i++;
	printf("%d\n", (i < 3) ? 0 : i / 3);
	return 0;
}