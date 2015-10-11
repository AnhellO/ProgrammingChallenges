#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int n, i;
unsigned long long num;
unsigned long long inverse(unsigned long long);

int main()
{
    scanf("%d",&n);
    unsigned long long arr[n];
    for(i = 0 ; i < n ; i++)
    {
        scanf("%llu",&arr[i]);
        arr[i] = inverse(arr[i]);
    }
    sort(arr, arr + n);
    for(i = 0 ; i  < n ; i++)
    {
        printf("%llu\n",arr[i]);
    }
    return 0;
}

unsigned long long inverse(unsigned long long num)
{
    unsigned long long result = 0, div = num, mod;
    while(div != 0)
    {
        mod = div % 10;
        div = div / 10;
        result = result * 10 + mod;
    }
    return result;
}