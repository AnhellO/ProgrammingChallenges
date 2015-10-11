#include <cstdio>
#include <vector>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int N, i;
vector<int> primes(101, 1);

void eratostenes()
{
    int i, j;
    for(i = 2 ; i * i <= 100 ; i++)
    {
        if(primes[i] == 1)
            for(j = i * i ; j <= 100 ; j += i)
            {
                primes[j] = 0;
            }
    }
}

bool isGood(int element)
{
	int i, cont = 0;
	FOR(i, 2, 100, 1)
		if(primes[i])
		{	
			if(cont == 3) return true;
			if(element % i == 0) cont++;
		}
	return (cont == 3) ? true : false;
}

int main() 
{
	eratostenes();
	scanf("%d", &N);
	vector<int> numbers(N);
	FOR(i, 0, N, 1) scanf("%d", &numbers[i]);
	FOR(i, 0, N, 1)
		if(!isGood(numbers[i]))
			break;
	printf((i == N) ? "YES\n" : "NO\n");
	return 0;
}