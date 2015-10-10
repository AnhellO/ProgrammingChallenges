#include <cstdio>
using namespace std;

unsigned long long int n, male, sum, i, temp;

int main() 
{
	while(scanf("%llu", &n) != EOF)
	{
		if(n == -1)
			break;
		else if(n == 0)
		{
			printf("%d %d\n", 0, 1);
			continue;
		}
		male = 1;
		sum = 2;
                temp = 0;
		for(i = 1 ; i < n ; i++)
		{
                        temp = sum + male;
			male = sum;
			sum = temp + 1;
		}
		printf("%llu %llu\n", male, sum);
	}
	return 0;
}