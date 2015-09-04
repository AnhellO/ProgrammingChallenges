#include <cstdio>
#include <vector>
#include <algorithm>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
#define V vector<int>
using namespace std;

int N, R, i;

int main() 
{
	while(scanf("%d %d", &N, &R) != EOF)
	{
		V rVolunteers(R);
		FOR(i, 0, R, 1)
			scanf("%d", &rVolunteers[i]);
		sort(rVolunteers.begin(), rVolunteers.end());
		if(rVolunteers.size() == N)
			printf("%c\n", '*');
		else
		{	
			FOR(i, 0, N, 1)
				if(!binary_search(rVolunteers.begin(), rVolunteers.end(), i + 1))
					printf("%d ", i + 1);
			printf("\n");
		}
	}
	return 0;
}