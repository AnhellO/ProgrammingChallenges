#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int t;
char fig;
const double pi = 3.14159;
double r, h, v, mayor = 0.0;
double volumeCone(double, double);
double volumeCilinder(double, double);
double volumeSphere(double);

int main()
{
    scanf("%d",&t);
    while(t != 0)
    {
        scanf("%s",&fig);
        if(fig == 'C') {
            scanf("%lf %lf", &r, &h);
            v = volumeCone(r, h);
        }
        else if(fig == 'L') {
            scanf("%lf %lf", &r, &h);
            v = volumeCilinder(r, h);
        }
        else {
            scanf("%lf",&r);
            v = volumeSphere(r);
        }

        mayor = (v > mayor) ? v : mayor;
        t--;
    }
    printf("%.3lf",mayor);
    return 0;
}

double volumeCone(double r, double h)
{
    return (pi * (pow(r,2)) * h) / 3;
}

double volumeCilinder(double r, double h)
{
    return pi * (pow(r,2)) * h;
}

double volumeSphere(double r)
{
    return (4 * pi * (pow(r,3))) / 3;
}
