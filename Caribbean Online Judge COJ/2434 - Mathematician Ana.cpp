#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
using namespace std;

bool isPrime(unsigned long long num, unsigned long long div)
{
    return (div>1) ? ((num%div!=0) ? (isPrime(num,div-1)) : (false)) : (true);
}

unsigned long long primorial(unsigned long long num)
{
    unsigned long long prod=1;
    while(num>=1)
    {
        prod *= (isPrime(num,(unsigned long long)num/2)) ? num : 1;
        num--;
    }
    return prod;
}

int main()
{
    unsigned long long n;

    do
    {
        scanf( "%llu",&n);
        (n!=0) ? printf( "%llu\n",primorial(n)) : false;
    }while(n!=0);
    return 0;
}