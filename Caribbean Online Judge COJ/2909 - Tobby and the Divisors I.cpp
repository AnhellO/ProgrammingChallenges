#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
 
int A, N, i, M, lowest;
 
int sumOfDivisors(int num)
{
    int i, cont = 0;
    for(i = 1 ; i < num ; i++)
    {
    	if(num % i == 0) cont++;
    }
    return cont;
}
 
int main()
{
	scanf("%d", &A);
	while(A--)
	{
		scanf("%d", &N);
		M = lowest = 0;
		for(i = 1 ; i <= N ; i++) M = max(sumOfDivisors(i), M);
		for(i = 1 ; i <= N ; i++)
		{
			if(sumOfDivisors(i) == M)
			{
				lowest = i;
				break;
			}
		}
		printf("%d\n", lowest);
	}
	return 0;
}
