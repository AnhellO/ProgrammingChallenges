#include <cstdio>
#include <cmath>
using namespace std;

double a, b, c;

int main()
{
    while(scanf("%lf %lf %lf", &a, &b, &c) != EOF)
        printf("The radius of the round table is: %.3lf\n", (!a && !b && !c) ? 0.0 : sqrt((((a + b + c) / 2) - a) * (((a + b + c) / 2) - b) * (((a + b + c) / 2) - c) / ((a + b + c) / 2)));
    return 0;
}