#include <cstdio>
#define MAXN 105
using namespace std;

int h, w, area[MAXN][MAXN], i, j, flag;
double A = 0.0;

int main()
{
	scanf("%d %d", &h, &w);
	for(i = 0 ; i < h ; i++)
		for(j = 0 ; j < w ; j++)
			scanf(" %c", &area[i][j]);
	for(i = 0 ; i < h ; i++)
	{
		flag = 0;
		for(j = 0 ; j < w ; j++)
		{
			if(area[i][j] == 47 || area[i][j] == 92)
			{
				A += 0.5;
				flag += (!flag) ? 1 : -1;
			}
			if(area[i][j] == 46 && flag == 1) A += 1.0;
		}
	}
	printf("%d\n", (int)A);
	return 0;
}