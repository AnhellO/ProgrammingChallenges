#include <iostream>
#include <cstdio>
using namespace std;

int n;
int inverse(int);

int main()
{
    while(cin >> n)
    {
        (n < inverse(n)) ? printf("YES\n") : printf("NO\n");
    }
    return 0;
}

int inverse(int num)
{
    int result = 0, div = num, mod = 0;
    while(div != 0)
    {
        mod = div % 10;
        div = div / 10;
        result = result * 10 + mod;
    }
    return result;
}
