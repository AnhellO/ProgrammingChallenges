#include <cstdio>
#define MAXN 1000001
#define FOR(i, a, b) for(i = a ; i < b ; i++)
#define WHILE(n, m, comp1, comp2) while(comp1 < n && comp2 < m)
#define RESET(comp1, comp2, equal) comp1 = comp2 = equal = 0
using namespace std;

int n, m, i, comp1, comp2, equal, jack[MAXN], jill[MAXN];

int main() 
{
	while(scanf("%d %d", &n, &m) != EOF)
	{
		if(!n && !m) break;
		FOR(i, 0, n)
			scanf("%d", &jack[i]);
		FOR(i, 0, m)
			scanf("%d", &jill[i]);
		RESET(comp1, comp2, equal);
		WHILE(n, m, comp1, comp2)
		{
			if(jack[comp1] > jill[comp2])
				comp2++;
			else if(jack[comp1] < jill[comp2])
				comp1++;
			else
			{
				equal++;
				comp1++;
				comp2++;
			}
		}
		printf("%d\n", equal);
	}
	return 0;
}