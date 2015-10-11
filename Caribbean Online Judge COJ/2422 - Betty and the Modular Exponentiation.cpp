#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

unsigned long long int t, a, b, mod = 1000000000;
unsigned long long int modular(unsigned long long int, unsigned long long int, unsigned long long int);

int main()
{
    scanf("%llu", &t);
    while(t--)
    {
        scanf("%llu %llu", &a, &b);
        printf("%llu\n", modular(a, b, mod));
    }
    return 0;
}

unsigned long long int modular(unsigned long long int a, unsigned long long int b, unsigned long long int mod)
{
    unsigned long long int exp = 1, x = a % mod;
    while (b > 0)
    {
        if (b % 2 != 0)
            exp = (exp * x) % mod;
        x = (x * x) % mod;
        b = b / 2;
    }
    return exp;
}