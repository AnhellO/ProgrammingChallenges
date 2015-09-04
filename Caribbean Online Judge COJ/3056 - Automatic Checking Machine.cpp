#include <cstdio>
using namespace std;

int x[5], y[5], i;

int main()
{
	scanf("%d %d %d %d %d %d %d %d %d %d", &x[0], &x[1], &x[2], &x[3], &x[4], &y[0], &y[1], &y[2], &y[3], &y[4]);
	for(i = 0 ; i < 5 ; i++)
		if(x[i] == y[i])
			break;
	printf((i == 5) ? "Y\n" : "N\n");
	return 0;
}