#include <cstdio>
using namespace std;
 
int n, d;
 
int main()
{
	while(scanf("%d %d", &n, &d) && (n && d)) printf("%d %d / %d\n", n / d, n % d, d);
	return 0;
}