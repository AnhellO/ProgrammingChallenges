#include <cstdio>
using namespace std;

#define cicloCasos(n) while(n--)
int n, l, d, r, g, total = 0, res = 0;

int main()
{
    scanf("%d %d", &n, &l);
    cicloCasos(n)
    {
        scanf("%d %d %d", &d, &r, &g);
        total += d - res;
        res = d;
        while(total % (r + g) < r)
        {
            total++;
        }
    }
    total += l - res;
    res = l;
    printf("%d\n", total);
    return 0;
}