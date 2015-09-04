#include <bits/stdc++.h>
using namespace std;

int N, G, i, j;

int main()
{
	scanf("%d", &N);
	while(N--)
	{
		scanf("%d", &G);
		vector<int> id(G);
		for(i = 0 ; i < G ; i++) scanf("%d", &id[i]);
		for(i = 1 ; i < 100000 ; i++)
		{
			set<int> aux;
			for(j = 0 ; j < G ; j++) aux.insert(id[j] % i);
			if(aux.size() == G)
			{
				printf("%d\n", i);
				break;
			}
		}
	}
	return 0;
}