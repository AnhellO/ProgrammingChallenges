#include <cstdio>
#include <cmath>
#define W(t) while(t--)
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int N, x, y, dist, may = 0;

int distancePtoP(int x1, int y1, int x2, int y2)
{
    return pow(x2 - x1, 2) + pow(y2 - y1, 2);
}

int main() 
{
	scanf("%d", &N);
	W(N)
	{
		scanf("%d %d", &x, &y);
		dist = distancePtoP(0, 0, x, y);
		if(dist > may) may = dist;
	}
	printf("%d\n", may);
	return 0;
}