#include <cstdio>
#include <vector>
using namespace std;

int N, S, i, j;

int main()
{
	scanf("%d %d", &N, &S);
	vector<vector<int> > triangle(N, vector<int>(N, 0));
	for(i = 0 ; i < N ; i++)
	{
		for(j = 0 ; j <= i ; j++)
		{
			triangle[i][j] = S++;
			if(S == 10) S = 1;
		}
	}
	for(i = 0 ; i < N ; i++)
	{
		for(j = 0 ; j < N ; j++)
		{
			if(j) (triangle[j][i]) ? printf(" %d", triangle[j][i]) : printf("  ");
			else (triangle[j][i]) ? printf("%d", triangle[j][i]) : printf(" ");
		}
		if(i < N - 1) printf("\n");
	}
	return 0;
}