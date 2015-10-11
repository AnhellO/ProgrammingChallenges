#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

unsigned long long int n;
bool isTriangular(unsigned long long int);

int main()
{
    do
    {
        scanf("%llu",&n);
        if(n != 0)
            (isTriangular(n)) ? printf("YES\n") : printf("NO\n");

    }while(n != 0);
    return 0;
}

bool isTriangular(unsigned long long int n)
{
    if (n < 0)
        return false;

    unsigned long long int tst = (unsigned long long int)pow((2 * n), 0.5);

    if(tst * (tst + 1) == 2 * n)
        return true;
    else
        return false;
}
