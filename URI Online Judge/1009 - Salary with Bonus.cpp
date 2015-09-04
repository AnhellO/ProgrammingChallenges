#include <bits/stdc++.h>
using namespace std;
 
char name[10000];
double s, v;
 
int main()
{
    scanf("%s %lf %lf", &name, &s, &v);
    printf("TOTAL = R$ %.2lf\n", s + (v * 0.15));
    return 0;
}