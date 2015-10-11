#include <cstdio>
#include <cmath>
using namespace std;
 
int T, k;
 
int main()
{
	scanf("%d", &T);
	while(T--)
	{
		scanf("%d", &k);
		printf("%d\n", (int)pow(2, k) - 1);
	}
	return 0;
}