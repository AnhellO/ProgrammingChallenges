#include <bits/stdc++.h>
using namespace std;

int L, A, pos, may;
char dir;

int main()
{
	while(scanf("%d %d", &L, &A) && (L && A))
	{
		may = 0;
		while(A--)
		{
			scanf("%d %c", &pos, &dir);
			if(dir == 'R') pos = L - pos;
			if(pos > may) may = pos;
		}
		printf("The last ant will fall down in %d seconds.\n", may);
	}
	return 0;
}