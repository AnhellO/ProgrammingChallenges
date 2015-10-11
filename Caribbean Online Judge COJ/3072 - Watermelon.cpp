#include <cstdio>
using namespace std;

int w;

int main()
{
	scanf("%d", &w);
	printf((w % 2 || w == 2) ? "NO\n" : "YES\n");
	return 0;
}