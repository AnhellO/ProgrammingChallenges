#include <cstdio>
using namespace std;

unsigned long long int n, m, i;

int main()
{
    for(i = 0 ; i < 1000 ; i++)
    {
        scanf("%llu %llu", &n, &m);
        printf("%llu\n", n + m);
    }
    return 0;
}