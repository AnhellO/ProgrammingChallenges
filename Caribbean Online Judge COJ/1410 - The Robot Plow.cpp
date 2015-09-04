#include <cstdio>
#define MAXN 241
using namespace std;

bool field[MAXN][MAXN] = {0};
int X, Y, I, Xll, Yll, Xur, Yur, i, j, cont = 0;

int main()
{
	scanf("%d %d %d", &X, &Y, &I);
	while(I--)
	{
		scanf("%d %d %d %d", &Xll, &Yll, &Xur, &Yur);
		for(i = Xll ; i <= Xur ; i++)
			for(j = Yll ; j <= Yur ; j++)
				field[i][j] = 1;
	}
	for(i = 1 ; i <= X ; i++)
		for(j = 1 ; j <= Y ; j++)
			if(field[i][j])
				cont++;
	printf("%d\n", cont);
	return 0;
}