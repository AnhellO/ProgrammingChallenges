#include <cstdio>
#include <deque>
#include <utility>
#define W(T) while(T--)
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int T, N, M, i, cont;

bool checkHigherPriority(deque<pair<int, bool> > D)
{
	int i;
	FOR(i, 1, D.size(), 1)
		if(D[0].first < D[i].first) return true;
	return false;
}

int main() 
{
	scanf("%d", &T);
	W(T)
	{
		scanf("%d %d", &N, &M);
		deque<pair<int, bool> > jobs(N);
		cont = 0;
		FOR(i, 0, N, 1) 
		{
			scanf("%d", &jobs[i].first);
			if(i == M) jobs[i].second = true;
		}
		while(true)
		{
			while(checkHigherPriority(jobs))
			{
				jobs.push_back(make_pair(jobs[0].first, jobs[0].second));
				jobs.pop_front();
			}
			//printf("%d ", jobs[0].first);
			if(!jobs[0].second) 
			{
				cont++;
				jobs.pop_front();
			}
			else
			{
				cont++;
				break;
			}
		}
		printf("%d\n", cont);
	}
	return 0;
}