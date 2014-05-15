#include <cstdio>
using namespace std;

int t, a, b, i, sum;

int main()
{
    scanf("%d", &t);
    while(t--)
    {
        sum = 0;
        scanf("%d %d", &a, &b);
        for(i = a ; i <= b ; i++)
        {
            sum += (i * (i + 1) * (i + 2)) % 100;
        }
        printf("%d\n", sum %= 100);
    }
    return 0;
}