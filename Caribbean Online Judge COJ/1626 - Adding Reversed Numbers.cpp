#include <cstdio>
using namespace std;

unsigned long long int N, num1, num2;
unsigned long long int inverse(unsigned long long int);

int main()
{
    scanf("%llu", &N);
    while(N--)
    {
        scanf("%llu %llu", &num1, &num2);
        printf("%llu\n", inverse(inverse(num1) + inverse(num2)));
    }
    return 0;
}

unsigned long long int inverse(unsigned long long int num)
{
    unsigned long long int result = 0, div = num, mod;
    while(div != 0)
    {
        mod = div % 10;
        div = div / 10;
        result = result * 10 + mod;
    }
    return result;
}