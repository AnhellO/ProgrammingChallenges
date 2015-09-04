#include <cstdio>
using namespace std;

int n, i, cont = 0;
int mcd(int, int);

int main()
{
    scanf("%d",&n);
    for(i = 1 ; i < n ; i++)
    {
        cont += (mcd(i, n) == 1) ? 1 : 0;
    }
    printf("%d\n",cont);
    return 0;
}

int mcd(int a, int b)
{
	return (b == 0) ? a : mcd(b, a%b);
}