#include <bits/stdc++.h>
using namespace std;
 
int n1, n2;
double p1, p2;
 
int main()
{
    scanf("%d %d %lf %d %d %lf", &n1, &n1, &p1, &n2, &n2, &p2);
    printf("VALOR A PAGAR: R$ %.2lf\n", n1 * p1 + n2 * p2);
    return 0;
}