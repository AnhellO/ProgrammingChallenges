#include <cstdio>
#include <vector>
#include <utility>
using namespace std;

int N, Q, i, j, q;

int main() 
{
	scanf("%d %d", &N, &Q);
	vector<int> temp(N);
	vector<pair<int, int> > notes;
	for(i = 0 ; i < N ; i++) scanf("%d", &temp[i]);
	for(i = 0 ; i < N ; i++)
		for(j = 0 ; j < temp[i] ; j++)
			notes.push_back(make_pair(i + 1, 1));
	while(Q--)
	{
		scanf("%d", &q);
		printf("%d\n", notes[q].first);
	}
	return 0;
}