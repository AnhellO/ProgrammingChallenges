#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

#define lectura(n) while(n--)
#define ciclo(i, a, b, c) for(i = a ; i < b ; i += c)
int t, b, a, d, i, reward; 

int main() 
{
	scanf("%d", &t);
	lectura(t)
	{
		scanf("%d %d", &b, &a);
		vector<int> jobs(a);
		reward = 0;
		ciclo(i, 0, a, 1)
		{
			scanf("%d %d", &jobs[i], &d);
		}
		sort(jobs.begin(), jobs.end());
		std::reverse(jobs.begin(), jobs.end());
		ciclo(i, 0, b, 1)
		{
			reward += jobs[i];
		}
		printf("%d\n", reward);
	}
	return 0;
}