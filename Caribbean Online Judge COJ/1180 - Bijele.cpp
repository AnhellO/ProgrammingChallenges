#include <cstdio>
using namespace std;

int t, i, mirkos;

int main()
{
    scanf("%d", &t);
    while(t--)
    {
        for(i = 0 ; i < 6 ; i++)
        {
            scanf("%d", &mirkos);
            if(i == 0 || i == 1)
                mirkos = (mirkos != 1) ? 1 - mirkos : 0;
            else if(i == 2 || i == 3 || i == 4)
                mirkos = (mirkos != 2) ? 2 - mirkos : 0;
            else
                mirkos = (mirkos != 8) ? 8 - mirkos : 0;
            if(i != 5)
                printf("%d ", mirkos);
            else
                printf("%d\n", mirkos);
        }
    }
    return 0;
}