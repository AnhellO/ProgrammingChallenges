#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int a, b, c, n;
void formula(int, int, int);

int main()
{
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d %d", &a, &b, &c);
        formula(a, b, c);
    }
    return 0;
}

void formula(int a, int b, int c)
{
    (pow(b, 2) - 4 * a * c >= 0) ? printf("%s\n","SI") : printf("%s\n","NO");
}
