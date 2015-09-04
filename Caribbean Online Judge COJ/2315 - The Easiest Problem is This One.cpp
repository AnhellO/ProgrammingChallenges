#include <bits/stdc++.h>
using namespace std;

int N, S, i;

int sumOfDigits(int n)
{
	int sum = 0;
	while(n != 0)
	{
	    sum += n % 10;
	    n /= 10;
	}
	return sum;
}

int main()
{
	while(scanf("%d", &N) && N)
	{
		for(i = 11 ; i < 100000 ; i++)
		{
			S = N * i;
			//printf("%d %d\n", sumOfDigits(N) ,sumOfDigits(S));
			if(sumOfDigits(N) == sumOfDigits(S)) break;
		}
		printf("%d\n", i);
	}
	return 0;
}