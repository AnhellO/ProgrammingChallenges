#include <iostream>
#include <cstdio>
using namespace std;

int t, f, l, s, i;

int main()
{
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d %d", &f, &l, &s);
        if(!s)
            s = 1;
        int sum = f + l;
        if(!sum)
            sum = 2;
        int x, y, x0, part;
        part = ((2 * s) % sum == 0) ? ((2 * s) / sum) : (((2 * s) / sum) + 1);
        int dif;
        dif = ((l - f) % ((part - 4) - 1) == 0) ? ((l - f) / ((part - 4) - 1)) : (((l - f) / ((part - 4) - 1)) + 1);
        x = f - dif;
        y = l + dif;
        y += dif;
        x0 = x - dif;
        printf("%d\n%d %d ", part, x0, x);
        if(f > l)
        {
            for(i = x + dif ; i >= y ; i = i + dif)
            {
                (i + 1 >= y) ? printf("%d ", i) : printf("%d", i);
            }
        }
        else
        {
            for(i = x + dif ; i <= y ; i = i + dif)
            {
                (i + 1 <= y) ? printf("%d ", i) : printf("%d\n", i);
            }
        }
    }
    return 0;
}