#include <cstdio>
#include <vector>
#define FOR1(i, a, b, c) for(i = a ; i <= b ; i += c)
#define FOR2(i, a, b, c) for(i = a ; i < b ; i += c)
#define PB(v, n) v.push_back(n)
using namespace std;

int P, Q, i, j;

int main() 
{
	scanf("%d %d", &P, &Q);
	vector<int> factors1, factors2;
	FOR1(i, 1, P, 1)
	{
		if(P % i == 0)
			PB(factors1, i);
	}
	FOR1(i, 1, Q, 1)
	{
		if(Q % i == 0)
			PB(factors2, i);
	}
	FOR2(i, 0, factors1.size(), 1)
	{
		FOR2(j, 0, factors2.size(), 1)
		{
			printf("%d %d\n", factors1[i], factors2[j]);
		}
	}
	return 0;
}