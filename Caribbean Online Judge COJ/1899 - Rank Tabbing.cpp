#include <cstdio>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int N, pag, i, j = 0, k = 1;

struct contestant
{
	int id, n, t, p;
};

bool predicate1(contestant const& lhs, contestant const& rhs)
{
	if(lhs.n != rhs.n) return lhs.n > rhs.n;
	return lhs.t < rhs.t;
}

bool predicate2(contestant const& lhs, contestant const& rhs)
{
	return lhs.id < rhs.id;
}

int main()
{
	scanf("%d %d", &N, &pag);
	vector<contestant> v(N);
	for(i = 0 ; i < N ; i++) scanf("%d %d %d", &v[i].id, &v[i].n, &v[i].t);
	sort(v.begin(), v.end(), &predicate1);
	for(i = 0 ; i < N ; i++)
	{
		if(j < pag)
		{
			v[i].p = k;
			j++;
		}
		else
		{
			j = 1;
			k++;
			v[i].p = k;
		}
	}
	sort(v.begin(), v.end(), &predicate2);
	for(i = 0 ; i < N ; i++) printf("%d\n", v[i].p);
	return 0;
}