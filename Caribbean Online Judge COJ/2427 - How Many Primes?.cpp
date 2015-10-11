#include <cstdio>
#include <vector>
using namespace std;

#define ciclo(i, a, b, c) for(i = a ; i <= b ; i += c)
int a, b, i;
vector<int> primes(1000001, 1);
void eratostenes();

int main()
{
    eratostenes();
    primes[0] = primes[1] = 1;

    ciclo(i, 1, 1000000, 1)
    {
        primes[i] += primes[i - 1];
    }

    while(scanf("%d %d", &a, &b) != EOF)
    {
        if(!a && !b)
            break;
        printf("%d\n", primes[b] - primes[a - 1]);
    }
    return 0;
}

void eratostenes()
{
    int i, j;
    for(i = 2 ; i * i <= 1000000 ; i++)
    {
        if(primes[i] == 1)
            for(j = i * i ; j <= 1000000 ; j += i)
            {
                primes[j] = 0;
            }
    }
}