#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

double calcVolume(int radius, int height, double pi)
{
    return pi * pow(radius, 2.0) * height;
}

int main()
{
    int T, n, r, h;
    double sum = 0.0;
    double const pi = atan(1)*4;

    scanf("%d",&T);
    while(T != 0)
    {
        scanf("%d",&n);
        while(n != 0)
        {
            scanf("%d %d", &r, &h);
            sum += calcVolume(r, h, pi);
            n--;
        }
        printf("%4.2f\n",sum);
        sum = 0.0;
        T--;
    }
    return 0;
}