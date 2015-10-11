#include <cstdio>
#include <cmath>
using namespace std;

int n;

int main()
{
    scanf("%d", &n);
    if(n == 1)
        printf("%d\n", 1);
    else
        printf("%d\n", (int)log2(n) + 1);
    return 0;
}