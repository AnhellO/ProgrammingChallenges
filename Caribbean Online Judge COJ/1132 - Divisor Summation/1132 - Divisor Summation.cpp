#include <cstdio>
#include <cmath>
using namespace std;

int n, i, num;
int sumOfDivisors(int);

int main()
{
        scanf("%d",&n);
        while(n--)
        {
                scanf("%d",&num);
                printf("%d\n",sumOfDivisors(num) - num);
        }
        return 0;
}

int sumOfDivisors(int num)
{
        int p, i, prod = 1;
        for(i = 2 ; i * i <= num ; i++)
        {
                p = 1;
                while(num % i == 0)
                {
                        p = (p * i) + 1;
                        num /= i;
                }
                prod *= p;
        }
        if(num > 1) prod *= 1 + num;
        return prod;
}
