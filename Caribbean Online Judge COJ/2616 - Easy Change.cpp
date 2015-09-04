#include <cstdio>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int T, N, i, subT, total;

int main() 
{
	scanf("%d", &T);
	FOR(i, 0, T, 1)
	{
		scanf("%d", &N);
		subT = total = 0;
		if(N == 29) total = 5;
		else if(N == 22) total = 4;
		else if(N == 23) total = 4;
		else if(N == 16) total = 3;
		else if(N == 17) total = 3;
		else if(N == 11) total = 2;
		else
		{
			if(N >= 6)
			{
				subT = N / 6;
				if(subT < N % 6)
				{
					subT = N / 5;
					if(subT < N % 5) total = 2;
					else
					{
						if(N % 5 != 0)
						{
							subT++;
							total = subT;
						}
						else total = subT;
					}
				}
				else
				{
					if(N % 6 != 0)
					{
						subT++;
						total = subT;
					}
					else total = subT;
				}
			}
			else if(N == 5) total = 1;
			else if(N >= 3)
			{
				subT = N / 3;
				if(N % 3 != 0) total = subT + 1;
				else total = subT;
			}
			else if(N >= 1) total = N / 1;
		}
		printf("Case %d: %d\n", i + 1, total);
	}
	return 0;
}