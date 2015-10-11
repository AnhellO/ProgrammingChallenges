#include <cstdio>
#include <algorithm>
#include <functional>
using namespace std;

typedef unsigned long long int ULL;
ULL N, K, i, sum = 0;

int main()
{
	scanf("%llu %llu", &N, &K);
	ULL courses[N];
	for(i = 0 ; i < N ; i++) scanf("%llu", &courses[i]);
	sort(courses, courses + N, greater<int>());
	for(i = 0 ; i < N ; i++)
	{
		sum += courses[i];
		if(sum >= K) break;
	}
	(i != N && sum >= K) ? printf("%d\n", i + 1) : printf("IMPOSSIBLE\n");
	return 0;
}