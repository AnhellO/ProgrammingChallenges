#include <iostream>
#include <cstdio>
using namespace std;

int sumatory(int n)
{
    if(n>1)
        return n=(n!=1) ? n+=sumatory(n-1):1;
    else
        return n=(n!=1) ? n+=sumatory(n+1):1;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",sumatory(n));
    return 0;
}