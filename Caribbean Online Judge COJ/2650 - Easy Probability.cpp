#include <cstdio>
using namespace std;

double a, b;

int main()
{
    scanf("%lf %lf", &a, &b);
    printf("%.2lf\n", 1 - (b / a));
    return 0;
}