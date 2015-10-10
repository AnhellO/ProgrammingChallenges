#include <iostream>
#include <cstdio>
#include <cstring>
#include <bitset>
using namespace std;

int n, i;
bitset<10000001> primes;
void eratostenes();

int main()
{
    eratostenes();
    while(true)
    {
        scanf("%d",&n);
        if(n == 0){
            break;
        }

        for (i = 3 ; i <= n ; i++)
        {
            if(!primes.test(i) && !primes.test(n - i))
            {
                printf("%d = %d + %d\n", n, i, n - i);
                break;
            }
        }
    }
	return 0;
}

void eratostenes()
{
    int i, j;
    primes.reset();
    for(i = 2 ; i * i <= 10000000 ; i++)
    {
        if(!primes.test(i))
            for(j = i + i ; j <= 10000000 ; j += i)
            {
                primes.set(j);
            }
    }
}
