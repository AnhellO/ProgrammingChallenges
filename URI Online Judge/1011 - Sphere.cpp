#include <bits/stdc++.h>
using namespace std;
 
double r;
const double PI = 3.14159;
 
double volume(double r)
{
    return (4.0 / 3.0) * PI * (r * r * r);
}
 
int main()
{
    scanf("%lf", &r);
    printf("VOLUME = %.3lf\n", volume(r));
    return 0;
}