#include <cstdio>
#include <algorithm>
using namespace std;

#define ciclo(i, a, b, c) for(i = a ; i < b ; i += c)
int k, cont = 0, i;
int groups[101];

int main()
{
    scanf("%d", &k);
    ciclo(i, 0, k, 1)
    {
        scanf("%d", &groups[i]);
    }
    sort(groups, groups + k);
    ciclo(i, 0, (k / 2) + 1, 1)
    {
        cont += (groups[i] / 2) + 1;
    }
    printf("%d\n", cont);
    return 0;
}