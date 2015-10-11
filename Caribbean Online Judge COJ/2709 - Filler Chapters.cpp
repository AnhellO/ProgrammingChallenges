#include <cstdio>
#include <algorithm>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int n, p, i, cont = 0;

int main()
{
	scanf("%d %d", &n, &p);
	int chapters[p];
	FOR(i, 0, p, 1)
	{	
		scanf("%d", &chapters[i]);
	}
	sort(chapters, chapters + p);
	FOR(i, 0, p, 1)
	{	
		if(chapters[i] != chapters[i + 1])
			cont++;
	}
	printf("%d\n", n - cont);
	return 0;
}