#include <cstdio>
using namespace std;

#define WTRUE(t) while(t--)
unsigned long long int c, m, n;

int main()
{
    scanf("%llu %llu", &c, &m);
    if(m == 1)
        printf("%d\n", 1);
    else
    {
        WTRUE(c)
        {
            scanf("%llu", &n);
            printf("%llu\n", ((n % m) * (n % m)) % m);
        }
    }
    return 0;
}