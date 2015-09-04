#include <cstdio>
using namespace std;

int t, n, m;

int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d", &n, &m);
        if(n == m && n > 1)
            printf("%c\n", (n % 2 == 0) ? 'L' : 'R');
        else if(n > m && m > 1)
            printf("%c\n", (m % 2 == 0) ? 'U' : 'D');
        else if(m == 1)
            printf("%c\n", (n == 1) ? 'R' : 'D');
        else if(m > n)
            printf("%c\n", (n % 2 == 0) ? 'L' : 'R');
    }
    return 0;
}