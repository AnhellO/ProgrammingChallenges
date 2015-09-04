#include <cstdio>
#include <cmath>
using namespace std;

int t, n, angle;
double r, side;
const double pi = 3.141592653589793;

int main()
{
    scanf("%d", &t);
    while(t--)
    {
        scanf("%lf %d", &r, &n);
        printf("%.4lf %.4lf\n", (2 * n * r * sin(pi / n)), (2 * n * r * tan(pi / n)));
    }
    return 0;
}