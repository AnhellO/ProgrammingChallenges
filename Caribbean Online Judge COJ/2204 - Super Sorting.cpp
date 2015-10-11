#include <cstdio>
using namespace std;

int t, n, i;

int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if(n == 1)
            printf("%d\n",n);
        else
        {
            for(i = 2 ; i <= n ; i++)
            {
                printf("%d ",i);
            }
            printf("%d\n",1);
        }
    }
    return 0;
}