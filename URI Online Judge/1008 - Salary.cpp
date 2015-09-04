#include <bits/stdc++.h>
using namespace std;
 
int n, h;
double a;
 
int main()
{
    scanf("%d %d %lf", &n, &h, &a);
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", n, h * a);
    return 0;
}