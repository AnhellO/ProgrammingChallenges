#include <cstdio>
using namespace std;

long long int a, b, c;
long long int mcd(long long int, long long int);

int main()
{
    while(scanf("%lld %lld %lld", &a, &b, &c) != EOF)
    {
        if(!a && !b && !c) break;
        printf((c % mcd(a, b) == 0) ? "YES\n" : "NO\n");
    }
    return 0;
}

long long int mcd(long long int a, long long int b)
{
	return (b == 0) ? a : mcd(b, a % b);
}