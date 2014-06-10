#include <cstdio>
#include <vector>
using namespace std;

int M, X;
vector<int> primes(1000001, 1);

void eratostenes()
{
    int i, j;
    for(i = 2 ; i * i <= 1000000 ; i++)
    {
        if(primes[i] == 1)
        {
            for(j = i * i ; j <= 1000000 ; j += i)
            {
                primes[j] = 0;
            }
        }
    }
}

int lowerBound(int X)
{
	int i;
	for(i = X ; i > -1 ; i--)
		if(primes[i])
			return i;
}

int upperBound(int X)
{
	int i;
	for(i = X ; i < 1000000 ; i++)
		if(primes[i])
			return i;
}

int main()
{
	eratostenes();
	scanf("%d", &M);
	while(M--)
	{
		scanf("%d", &X);
		printf("%d %d\n", lowerBound(X), upperBound(X));
	}
	return 0;
}