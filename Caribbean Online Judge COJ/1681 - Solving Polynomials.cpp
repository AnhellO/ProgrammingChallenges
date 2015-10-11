#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;

void formula(int a, int b, int c)
{
    string solucion;
    int discriminante = pow(b, 2) - 4 * a * c;

    solucion = (discriminante >= 0) ? printf("%s","YES") : printf("%s","NO");
}

int main()
{
    int a, b, c;

    scanf("%i %i %i", &a, &b, &c);
    formula(a, b, c);

    return 0;
}