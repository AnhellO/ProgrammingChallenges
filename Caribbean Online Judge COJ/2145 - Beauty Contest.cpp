#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

#define ciclo(i, a, b) for(i = a ; i < b ; i++)
int n, i, j, sum, k;

int main() 
{
	scanf("%d", &n);
	ciclo(i, 0, n)
	{
		vector<int> scores(10);
		sum = 0;
		ciclo(j, 0, 10)
		{
			scanf("%d", &scores[j]);
		}
		sort(scores.begin(), scores.end());
		ciclo(k, 1, 9)
		{
			sum += scores[k];
		}
		printf("%d %d\n", i + 1, sum);
	}
	return 0;
}