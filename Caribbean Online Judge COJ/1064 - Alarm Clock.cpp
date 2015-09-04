#include <cstdio>
using namespace std;

int h1, m1, h2, m2, amount1, amount2;

int main()
{
    while(scanf("%d %d %d %d", &h1, &m1, &h2, &m2) != EOF)
    {
        if(!h1 && !m1 && !h2 && !m2)
            break;
        amount1 = h1 * 60 + m1;
        amount2 = h2 * 60 + m2;
        printf("%d\n",(amount2 < amount1) ? (amount2 += 60 * 24) - amount1 : amount2 - amount1);
    }
    return 0;
}