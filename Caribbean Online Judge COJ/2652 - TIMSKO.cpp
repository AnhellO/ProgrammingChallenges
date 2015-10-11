#include <cstdio>
using namespace std;

#define wTRUE(m, n, k) while(m >= 2 && n >= 1 && m + n >= k + 3)
#define DECM(m) m -= 2
#define DECN(n) n--
#define INCCONT(cont) cont++
int m, n, k, cont = 0;

int main()
{
    scanf("%d %d %d", &m, &n, &k);
    wTRUE(m, n, k)
    {
        DECM(m);
        DECN(n);
        INCCONT(cont);
    }
    printf("%d\n", cont);
    return 0;
}
