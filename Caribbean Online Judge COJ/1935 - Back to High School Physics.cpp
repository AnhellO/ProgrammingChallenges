#include <cstdio>
using namespace std;

int v, t;

int main()
{
    while(scanf("%d %d", &v, &t) != EOF)
    {
        printf("%d\n", (2 * v) * t);
    }
    return 0;
}