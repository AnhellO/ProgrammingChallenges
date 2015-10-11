#include <cstdio>
using namespace std;

#define salida(val1, val2) if(!val1 && !val2) break
int r, n, i = 1, result;

int main()
{
    while(scanf("%d %d", &r, &n) != EOF)
    {
        salida(r, n);
        result = (r - 1) / n;
        printf("Case %d: ", i++);
        (result <= 26) ? printf("%d\n", result) : printf("impossible\n");
    }
    return 0;
}