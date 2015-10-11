#include <cstdio>
#include <cmath>
using namespace std;

int a, b, s, m, n;
const double convex = 180 / acos(-1);
double hyperbolic(double, double);
double degrees(double);

int main()
{
    while(true)
    {
        scanf("%d %d %d %d %d", &a, &b, &s, &m, &n);
        if(!a && !b && !s && !m && !n) break;
        printf("%.2lf %.2lf\n", degrees(atan(n * b / double(m * a))), hyperbolic(m * a, n * b) / s);
    }
    return 0;
}

double hyperbolic(double a, double b)
{
    return sqrt(a * a + b * b);
}

double degrees(double radius)
{
    return radius * convex;
}