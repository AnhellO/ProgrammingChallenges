#include <cstdio>
using namespace std;

int t, n, i, candies, sum;

int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        i = n;
        sum = 0;
        while(n--)
        {
            scanf("%d",&candies);
            sum += candies;
        }
        printf((sum % i == 0) ? "YES\n" : "NO\n");
    }
    return 0;
}