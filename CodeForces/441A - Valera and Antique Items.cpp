#include <cstdio>
#include <vector>
using namespace std;

int N, V, i, K, val;
vector<int> sellers;

int main()
{
	scanf("%d %d", &N, &V);
	for(i = 1 ; i <= N ; i++)
	{
		scanf("%d", &K);
		while(K--)
		{
			scanf("%d", &val);
			if(sellers.empty()) 
			{
				if(val < V)
					sellers.push_back(i);
			}
			else
			{
				if(val < V && sellers.back() != i)
					sellers.push_back(i);
			}
		}
	}
	if(sellers.empty()) printf("0\n");
	else
	{
		printf("%d\n", sellers.size());
		for(i = 0 ; i < sellers.size() ; i++)
			(!i) ? printf("%d", sellers[i]) : printf(" %d", sellers[i]);
	}
	return 0;
}