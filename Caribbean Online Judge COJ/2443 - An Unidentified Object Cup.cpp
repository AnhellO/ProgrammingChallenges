#include <bits/stdc++.h>
using namespace std;

typedef vector<pair<int, int> > VPII;
int N, K, i, j, val, primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 
								43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

bool comp(pair<int, int> f, pair<int, int> s)
{
	if(f.second != s.second) return f.second > s.second;
}

int main()
{
	scanf("%d %d", &N, &K);
	VPII c(N);
	for(i = 0 ; i < N ; i++)
	{
		c[i].first = i + 1;
		c[i].second = 0;
		for(j = 1 ; j <= K ; j++)
		{
			scanf("%d", &val);
			if(binary_search(primes, primes + 25, val)) c[i].second++;
		}
	}
	sort(c.begin(), c.end(), &comp);
	if(c[0].second == c[1].second) printf("No winner\n");
	else printf("Object %d wins with %d rare characteristics\n", c[0].first, c[0].second);
	//for(i = 0 ; i < N ; i++) printf("id: %d c: %d\n", c[i].first, c[i].second);
	return 0;
}