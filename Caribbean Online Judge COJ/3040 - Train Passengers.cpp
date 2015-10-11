#include <cstdio>
using namespace std;

typedef long long int LLI;
LLI C, n, i, temp = 0, left, entered, stay;

int main()
{
	scanf("%lld %lld", &C, &n);
	for(i = 0 ; i < n ; i++)
	{
		scanf("%lld %lld %lld", &left, &entered, &stay);
		temp -= left;
		if(temp < 0)
		{
			printf("impossible\n");
			return 0;
		}
		temp += entered;
		if(temp > C)
		{
			printf("impossible\n");
			return 0;
		}
		if(temp < C && stay)
		{
			printf("impossible\n");
			return 0;
		}
	}
	printf((!temp) ? "possible\n" : "impossible\n");
	return 0;
}