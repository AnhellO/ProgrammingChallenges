#include <cstdio>
#include <algorithm>
#include <functional>
using namespace std;

int T, i, j, abc[26];

int main()
{
	scanf("%d", &T);
	while(T--)
	{
		for(i = 0 ; i < 26 ; i++) scanf("%d", &abc[i]);
		sort(abc, abc + 26, greater<int>());
		for(i = 0 ; i < 26 ; i++)
			for(j = 0 ; j < abc[i] ; j++)
				printf("%c", 122 - i);
		printf("\n");
	}
	return 0;
}