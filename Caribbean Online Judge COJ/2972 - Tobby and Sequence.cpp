#include <cstdio>
#include <vector>
using namespace std;
 
int N, i, j, k;
 
int main()
{
	while(scanf("%d", &N) != EOF)
	{
		vector<int> A(N);
		j = 1, k = 10000;
		for(i = 0 ; i < N ; i++)
		{
			A[i] = (i % 2) ? j++ : k--;
		}
		for(i = 0 ; i < N ; i++) (!i) ? printf("%d", A[0]) : printf(" %d", A[i]);
		printf("\n");
	}
	return 0;
}
