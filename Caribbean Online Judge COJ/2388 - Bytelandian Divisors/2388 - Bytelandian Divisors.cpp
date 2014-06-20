#include <cstdio>
using namespace std;

int T, B, C;

int divide(int B, int C)
{
	int total = 0, d;
	if(B <= C) return total + 1;
	else
	{
		d = B / 2;
		return (B % 2) ? total + divide(d, C) + divide(d + 1, C) : total + 2 * divide(d, C);
	}
}

int main()
{
	scanf("%d", &T);
	while(T--)
	{
		scanf("%d %d", &B, &C);
		printf("%d\n", divide(B, C));
	}
	return 0;
}