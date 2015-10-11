#include <cstdio>
#include <cmath>
using namespace std;

unsigned long long int n, i = 1;

int main()
{
    while(scanf("%llu", &n) != EOF)
    {
        if(!n) break;
        double sq = (double)sqrt((9 + 4 * (n * 2)));
        //printf("%lf\n", sq);
        double x = (double)(3 + sq);
        if(fmod(x, 2) == 0.0)
        {
            printf("Case %d: ", i);
            printf("%d\n", (int)x / 2);
        }
        else
        {
            printf("Case %d: ", i);
            printf("%d\n", ((int)x / 2) + 1);
        }
        i++;
    }
    return 0;
}