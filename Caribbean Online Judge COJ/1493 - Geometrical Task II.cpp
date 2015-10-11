#include <iostream>
#include <cstdio>
using namespace std;

int ent, num, u;
string s;
double a, b, r, area;
const double pi = 3.14;

int main()
{
     cin >> s;
     if(s == "circle")
     {
         scanf("%lf", &r);
         area = r * r * pi;
     }
     else if(s == "triangle" || s == "rhombus")
     {
         scanf("%lf %lf", &a, &b);
         area = (a * b) / 2.0;
         ent = int(area * 1000);
         num = int(area * 100);
         u = ent % 10;
         if(u >= 5)
            num += 1;
         area = num / 100.00;
     }
     printf("%.2f", area);
     return 0;
}