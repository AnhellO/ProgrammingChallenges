#include <cstdio>
using namespace std;

int t, n, l, w;

int main() 
{
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d %d", &n, &l, &w);
		n++;
		printf("%d\n", ((n * (n + 1)) / 2) * (l * w));
	}
	return 0;
}