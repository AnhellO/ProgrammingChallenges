#include <cstdio>
using namespace std;

int i, j, n, mod = 10000007, hex[10001];

int main() 
{
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    while(cases--) 
    {
        scanf("%d %d %d %d %d %d %d", &hex[0], &hex[1], &hex[2], &hex[3], &hex[4], &hex[5], &n);
        hex[0] %= mod;
        hex[1] %= mod;
        hex[2] %= mod;
        hex[3] %= mod;
        hex[4] %= mod;
        hex[5] %= mod;
        for(i = 6 ; i <= n ; i++)
        {
        	for(hex[i] = 0, j = 1 ; j < 7 ; j++) hex[i] += hex[i - j];
			hex[i] %= mod;
        }
        printf("Case %d: %d\n", ++caseno, hex[n]);
    }
    return 0;
}