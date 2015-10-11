#include <cstdio>
#include <cmath>
using namespace std;

unsigned long long int i;
unsigned long long int nts(unsigned long long int i);

int main()
{
    while(true)
    {
        scanf("%llu",&i);
        if (i == 0)
            break;
        printf("%llu\n",(i == 1) ? 1 : ((i == 2 || i == 3) ? 2 : (unsigned long long int)nts(i)));
    }
    return 0;
}

unsigned long long int nts(unsigned long long int i)
{
    return ceil((sqrt(8 * i + 1) - 1) / 2);
}
