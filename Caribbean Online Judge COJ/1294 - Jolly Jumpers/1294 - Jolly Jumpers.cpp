#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
#define CL(v) v.clear()
#define PB(v, m) v.push_back(m)
using namespace std;

int N, i;
vector<int> dif;

int main() 
{
	while(scanf("%d", &N) != EOF)
	{
		vector<int> elements(N);
		CL(dif);
		FOR(i, 0, N, 1)
		{
			scanf("%d", &elements[i]);
			if(i > 0) PB(dif, abs(elements[i] - elements[i - 1]));
		}
		sort(dif.begin(), dif.end());
		FOR(i, 1, dif.size(), 1)
			if(abs(dif[i] - dif[i - 1]) != 1) 
			{
				printf("Not jolly\n");
				break;
			}
		if(i == dif.size() || N == 1) printf("Jolly\n");
	}
	return 0;
}