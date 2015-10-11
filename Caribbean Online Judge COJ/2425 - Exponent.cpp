#include <cstdio>
#include <cmath>
using namespace std;

int n, b, e, bF, eF;
double major, temp;

int main()
{
    while(scanf("%d", &n) != EOF)
    {
        if(!n) break;

        major = 0.0;
        bF = eF = 0;
        while(n--)
        {
            scanf("%d %d", &b, &e);
            temp = log(b) * e ;
            if(temp > major)
            {
                major = temp;
                bF = b;
                eF = e;
            }
        }
        printf("%d %d\n", bF, eF);
    }
    return 0;
}