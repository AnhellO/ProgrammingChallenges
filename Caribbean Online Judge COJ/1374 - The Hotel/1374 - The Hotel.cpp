#include <cstdio>
#define MAX 101
using namespace std;

int N, i, j, matrix[MAX][MAX];

void fill(int N)
{
    int i, j, k, M, t;
    M = N * (N + 1) / 2;
    t = 1;
    j = 0;

    k = 1;
    while(k <= M) 
    {
        for(j = N - 1 ; j >= 0 ; j--) 
        {
            t = j;
            i = 0;
            while(t <= N - 1) matrix[i++][t++] = k++;
        }
    }
    for(i = 1 ; i < N ; i++) 
    {
        t = i;
        for(j = 0 ; j < N - i ; ) matrix[t++][j++] = k++;
    }
}

int main() 
{
	scanf("%d", &N);
	fill(N);
	for(i = 0 ; i < N ; i++)
	{
		for(j = 0 ; j < N ; j++)
			if(!j) printf("%d", matrix[i][j]);
			else printf(" %d", matrix[i][j]);
		printf("\n");
	}
	return 0;
}