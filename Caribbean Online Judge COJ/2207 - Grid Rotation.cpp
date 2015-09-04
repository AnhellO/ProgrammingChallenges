#include <cstdio>
using namespace std;

int N, Q, i, j, cont;
bool flag;

int main() 
{
	scanf("%d", &N);
	char grid[N][N];
	char grid90[N][N];
	char grid180[N][N];
	char grid270[N][N];
	char query[N][N];
	for(i = 0 ; i < N ; i++)
		for(j = 0 ; j < N ; j++)
			scanf(" %c", &grid[i][j]);
	cont = 0;
	for(i = N - 1 ; i >= 0 ; i--)
	{
		for(j = 0 ; j < N ; j++)
			grid90[cont][j] = grid[j][i];
		cont++;
	}
	cont = 0;
	for(i = N - 1 ; i >= 0 ; i--)
	{
		for(j = 0 ; j < N ; j++)
			grid180[cont][j] = grid90[j][i];
		cont++;
	}
	cont = 0;
	for(i = N - 1 ; i >= 0 ; i--)
	{
		for(j = 0 ; j < N ; j++)
			grid270[cont][j] = grid180[j][i];
		cont++;
	}
	scanf("%d", &Q);
	while(Q--)
	{
		for(i = 0 ; i < N ; i++)
			for(j = 0 ; j < N ; j++)
				scanf(" %c", &query[i][j]);
		flag = true;
		for(i = 0 ; i < N ; i++)
		{
			for(j = 0 ; j < N ; j++)
				if(grid[i][j] != query[i][j]) flag = false;
			if(!flag) break;
		}		
		if(flag) 
		{
			printf("YES\n");
			continue;
		}
		flag = true;
		for(i = 0 ; i < N ; i++)
		{
			for(j = 0 ; j < N ; j++)
				if(grid90[i][j] != query[i][j]) flag = false;
			if(!flag) break;
		}		
		if(flag) 
		{
			printf("YES\n");
			continue;
		}
		flag = true;
		for(i = 0 ; i < N ; i++)
		{
			for(j = 0 ; j < N ; j++)
				if(grid180[i][j] != query[i][j]) flag = false;
			if(!flag) break;
		}		
		if(flag) 
		{
			printf("YES\n");
			continue;
		}
		flag = true;
		for(i = 0 ; i < N ; i++)
		{
			for(j = 0 ; j < N ; j++)
				if(grid270[i][j] != query[i][j]) flag = false;
			if(!flag) break;
		}		
		if(flag) 
		{
			printf("YES\n");
			continue;
		}
		else printf("NO\n");
	}
	return 0;
}