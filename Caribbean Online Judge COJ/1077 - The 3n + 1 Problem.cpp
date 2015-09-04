#include <cstdio>
using namespace std;

long int n1, n2, length, max, t, i, higher = 1;
int aux;

long int cycleLength(long int num)
{
	int length = 1;
	if(num > higher) higher = num;
	while(num != 1)
    	{
		if(num % 2) num = num * 3 + 1;
		else num = num >> 1;
		length++;
		if(num > higher) higher = num;
	}
	return length;
}

int main()
{
	while(scanf("%ld", &n1) != EOF)
    	{
		scanf("%ld", &n2);
		max = 1;
		aux = 0;
		if(n1 > n2)
		{
			t = n1;
			n1 = n2;
			n2 = t;
			aux = 1;
        	}
		for(i = n1 ; i <= n2 ; i++)
        	{
			length = cycleLength(i);
		    	if(length > max) max = length;
		}
		(aux == 0) ? printf("%ld %ld %ld\n", n1, n2, max) : printf("%ld %ld %ld\n", n2, n1, max);
	}
	return 0;
}
