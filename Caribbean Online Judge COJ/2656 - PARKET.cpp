#include <cstdio>
#define FOR1(i, a, b, c) for(i = a ; i < b ; i += c)
#define FOR2(i, a, b, c) for(i = a ; i >= b ; i -= c)
using namespace std;

int R, B, i, j;

int main()
{
    scanf("%d %d", &R, &B);
    FOR1(i, 3, 5000, 1)
    {
        FOR2(j, i, 3, 1)
        {
            if(R + B == i * j && R == 2 * i + 2 * j - 4)
            {
                printf("%d %d\n", i, j);
            }
        }
    }
    return 0;
}