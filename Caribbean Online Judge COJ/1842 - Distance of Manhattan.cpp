#include <cstdio>
using namespace std;

int t, xa, ya, xb, yb;

int main()
{
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d %d %d", &xa, &ya, &xb, &yb);
        if(xa >= xb && ya >= yb)
            printf("%d\n", ((xa - xb) + (ya - yb)));
        else if(xa >= xb && ya < yb)
            printf("%d\n", ((xa - xb) + (yb - ya)));
        else if(xa < xb && ya >= yb)
            printf("%d\n", ((xb - xa) + (ya - yb)));
        else
            printf("%d\n", ((xb - xa) + (yb - ya)));
    }
    return 0;
}