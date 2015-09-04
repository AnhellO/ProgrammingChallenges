#include <cstdio>
using namespace std;

int t, i, j, weight;
bool flag;

int main()
{
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &weight);
        flag = false;
        for(i = 0 ; i < 16 ; i++)
        {
            if((weight & 1 << i) != 0)
            {
                if(!flag)
                {
                    printf("%d", i);
                    flag = true;
                }
                else
                    printf(" %d", i);
            }
        }
        printf("\n");
    }
    return 0;
}