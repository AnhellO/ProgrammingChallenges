#include <cstdio>
#define MAX 8
using namespace std;

int x, y, cont = 0;
char chess[MAX][MAX];
bool flag = false;

bool _1(int i, int j)
{
	while(i > 0)
	{
		i--;
		if(chess[i][j] == '*') return false;
	}
	return true;
}

bool _2(int i, int j)
{
	while(i > 0 && j < MAX - 1)
	{
		i--;
		j++;
		if(chess[i][j] == '*') return false;
	}
	return true;
}

bool _3(int i, int j)
{
	while(j < MAX - 1)
	{
		j++;
		if(chess[i][j] == '*') return false;
	}
	return true;
}

bool _4(int i, int j)
{
	while(i < MAX - 1 && j < MAX - 1)
	{
		i++;
		j++;
		if(chess[i][j] == '*') return false;
	}
	return true;
}

bool _5(int i, int j)
{
	while(i < MAX - 1)
	{
		i++;
		if(chess[i][j] == '*') return false;
	}
	return true;
}

bool _6(int i, int j)
{
	while(i < MAX - 1 && j > 0)
	{
		i++;
		j--;
		if(chess[i][j] == '*') return false;
	}
	return true;
}

bool _7(int i, int j)
{
	while(j > 0)
	{
		j--;
		if(chess[i][j] == '*') return false;
	}
	return true;
}

bool _8(int i, int j)
{
	while(i > 0 && j > 0)
	{
		i--;
		j--;
		if(chess[i][j] == '*') return false;
	}
	return true;
}

bool solve(int i, int j)
{
	return (_1(i, j) && _2(i, j) && _3(i, j) && _4(i, j) && _5(i, j) && _6(i, j) && _7(i, j) && _8(i, j)) ? true : false;
}

int main()
{
	for(x = 0 ; x < MAX ; x++)
	{
		for(y = 0 ; y < MAX ; y++)
		{
			scanf("%c ", &chess[x][y]);
			if(chess[x][y] == '*') cont++;
		}
	}
	if(cont == 8) flag = true;
	for(x = 0 ; x < MAX ; x++)
	{
		for(y = 0 ; y < MAX ; y++)
		{
			if(chess[x][y] == '*')
			{
				if(!solve(x, y)) flag = false;
			}
			if(!flag) break;
		}
		if(!flag) break;
	}
	printf((flag) ? "valid\n" : "invalid\n");
	return 0;
}