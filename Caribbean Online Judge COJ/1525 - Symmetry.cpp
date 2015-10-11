#include <cstdio>
#include <algorithm>
using namespace std;

int n, m, places, cPlaces, res;
int getDiv(int n);

int main()
{
    scanf("%d %d", &n, &m);
    places = min(getDiv(n), getDiv(m));
    cPlaces = 1;
    res = 0;
    while(places--)
    {
        res += cPlaces;
        cPlaces *= 4;
    }
    printf("%d\n", res);
    return 0;
}

int getDiv(int n)
{
    return (n % 2) ? 1 + getDiv((n - 1) / 2) : 0;
}