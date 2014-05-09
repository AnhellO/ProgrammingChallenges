#include <cstdio>
#include <vector>
#include <algorithm>
#define W(T) while(T--)
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int T, N, M, i, cont;

int main() 
{
	scanf("%d", &T);
	W(T)
	{
		scanf("%d %d", &M, &N);
		vector<int> cities(N);
		cont = 0;
		FOR(i, 0, N, 1) scanf("%d", &cities[i]);
		sort(cities.begin(), cities.end());
		FOR(i, 0, N, 1)
		{
			if(M - cities[i] >= 0) cont++;
			else break;
			M -= cities[i];
		}
		printf("%d\n", cont);
	}
	return 0;
}