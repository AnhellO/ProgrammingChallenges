#include <cstdio>
#include <math.h>
using namespace std;

#define lectura(t) while(t--)
int t, r;
double const pi = atan(1.0) * 4.0;
double const s = sin(30.0 * pi / 180.0), c = cos(30.0 * pi / 180.0);

int main()
{
    scanf("%d", &t);
    lectura(t)
    {
        scanf("%d", &r);
        printf("%.2lf\n", (r * r) * s * c * 6.0);
    }
    return 0;
}