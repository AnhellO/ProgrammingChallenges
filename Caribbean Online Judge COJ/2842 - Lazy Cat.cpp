#include <cstdio>
#include <vector>
#include <bitset>
using namespace std;

int Q, i, j;
vector<int> palindromes(10000001, 0);
bitset<10000001> primes;

bool isPalindrome(int num)
{
	 int dig, rev = 0, n = num;
	 while(num > 0)
	 {
	      dig = num % 10;
	      rev = rev * 10 + dig;
	      num /= 10;
	 }
	 return (n == rev) ? true : false;
}

void eratostenes()
{
    int i, j;
    primes.reset();
    primes.set(0);
    primes.set(1);
    for(i = 2 ; i * i <= 10000000 ; i++)
    {
        if(!primes.test(i))
        {
            for(j = i + i ; j <= 10000000 ; j += i)
            {
                primes.set(j);
            }
        }
    }
}


void set()
{
	int i;
	for(i = 0 ; i < 10000001 ; i++)
		if(isPalindrome(i) && !primes.test(i)) palindromes[i] = 1;
}

void RSQ()
{
	int i;
	for(i = 1 ; i < 10000001 ; i++) palindromes[i] += palindromes[i - 1];
}

int main()
{
	eratostenes();
	set();
	RSQ();
	scanf("%d", &Q);
	while(Q--)
	{
		scanf("%d %d", &i, &j);
		printf("%d\n", palindromes[j] - palindromes[i - 1]);
	}
	return 0;
}