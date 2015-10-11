#include <cstdio>
#include <algorithm>
using namespace std;

int i, n, m, ui, di, lower = 10000000000;

int main()
{
	scanf("%d %d", &n, &m);
	while(m--)
	{
		scanf("%d %d", &ui, &di);
		int temp = di * n / (ui + di) + 1;
		lower = min((ui + di) * temp - di * n, lower);
	}
	printf("%d\n", lower);
	return 0;
}