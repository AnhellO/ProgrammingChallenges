#include <cstdio>
using namespace std;

#define ciclo(i, a, b) for(i = a ; i < b ; i++)
int N, countZeros, last, first, start, post, i;

int main()
{
    while (scanf("%d", &N) != EOF)
    {
        countZeros = last = 0;
        first = start = 1;

        ciclo(i, 0, N)
        {
            scanf("%d", &post);
            if(post == 1)
            {
                if (start == 1)
                {
                    start = 0;
                    first = last;
                }
                last = 0;
            }
            else if(++last == 2)
            {
                ++countZeros;
                last = 0;
            }
        }
        if(first == 1 && last == 1)
            countZeros++;
        printf("%d\n", countZeros);
    }
    return 0;
}