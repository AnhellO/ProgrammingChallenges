#include <cstdio>
using namespace std;

int n, x, y, i;

int main()
{
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d", &x, &y);
        ((x == y) || (x == y + 2)) ? ((x % 2 == 0) ? printf("%d\n", x + y) : printf("%d\n", (x + y) - 1)) : printf("No Number\n");
    }
    return 0;
}