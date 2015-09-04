#include <bits/stdc++.h>
using namespace std;

int N, S, E, i, j;
bool flag;

int main()
{
	while(scanf("%d", &N) && N)
	{
		vector<int> v(N);
		S = flag = 0;
		for(i = 0 ; i < N ; i++) scanf("%d", &v[i]);
		for(i = 0 ; i < N ; i++)
		{
			S += v[i];
			E = 0;
			for(j = N - 1 ; j > i ; j--) E += v[j];
			if(S == E)
			{
				printf("Sam stops at position %d and Ella stops at position %d.\n", i + 1, j + 2);
				flag = 1;
				break;
			}
		}
		if(!flag) printf("No equal partitioning.\n");
	}
	return 0;
}