#include <cstdio>
#include <cmath>
using namespace std;

#define lectura(t) while(t--)
int t, n;

int main() 
{
	scanf("%d", &t);
	lectura(t)
	{
		scanf("%d", &n);
		printf("%d\n", (int)sqrt(n));
	}
	return 0;
}