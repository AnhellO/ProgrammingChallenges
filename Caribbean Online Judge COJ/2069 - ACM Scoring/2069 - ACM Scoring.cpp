#include <cstdio>
#include <algorithm>
#define W(T) while(T--)
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int T, D, P, i, sumMins, sumTotal;

int main() 
{
	scanf("%d", &T);
	W(T)
	{
		scanf("%d %d", &D, &P);
		sumMins = 5;
		sumTotal = 0;
		int problems[P];
		FOR(i, 0, P, 1) scanf("%d", &problems[i]);
		sort(problems, problems + P);
		FOR(i, 0, P, 1)
		{
			if(sumMins + problems[i] > D) break;
			sumMins += problems[i];
			sumTotal += sumMins;
		}
		printf("%d %d\n", i, sumTotal);
	}
	return 0;
}