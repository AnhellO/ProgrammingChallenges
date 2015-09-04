#include <cstdio>
#include <cmath>
using namespace std;

int t, i;
double h, d, sum, res;

int main()
{
    scanf("%d", &t);
    sum = 0;
    i = t;
    while(t--)
    {
        scanf("%lf %lf", &h, &d);
        res = h - ((pow(h, 2) + pow(d, 2)) / (2 * h));
        sum += res;
        printf("%.1f\n", res);
    }
    printf("%.1f\n", sum / i);
    return 0;
}