#include <cstdio>
using namespace std;

#define ciclo(i, a, b, c) for(i = a ; i < b ; i += c)
#define ciclo2(i, a, b, c) for(i = a ; i <= b ; i += c)
unsigned long long int t, n, q, i, j, k;

int main()
{
    scanf("%llu", &t);
    while(t--)
    {
        scanf("%llu %llu", &n, &q);
        unsigned long long int nums[n];
        ciclo(k, 0, n, 1)
        {
            scanf("%llu", &nums[k]);
        }

        ciclo2(k, 1, n, 1)
        {
            nums[k] += nums[k - 1];
        }

        while(q--)
        {
            scanf("%llu %llu", &i, &j);
            if(i)
            {
                printf("%llu\n", nums[j] - nums[i - 1]);
            }
            else
                printf("%llu\n", nums[j]);
        }
        if(t) printf("\n");
    }
    return 0;
}