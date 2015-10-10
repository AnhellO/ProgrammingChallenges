#include <iostream>
#include <cstdio>
using namespace std;

int n;

int main()
{
    while(cin >> n)
    {
        if(n == 42) break;
        printf("%d\n",n);
    }
    return 0;
}