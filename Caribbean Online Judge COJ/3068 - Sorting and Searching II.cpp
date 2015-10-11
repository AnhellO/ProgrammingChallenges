#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int N, Q1, Q2, i, qi;

int main()
{
	scanf("%d", &N);
	vector<int> v(N);
	for(i = 0 ; i < N ; i++) scanf("%d", &v[i]);
	sort(v.begin(), v.end());
	scanf("%d %d", &Q1, &Q2);
	while(Q1--)
	{
		scanf("%d", &qi);
		printf((binary_search(v.begin(), v.end(), qi)) ? ":)\n" : ":(\n");
	}
	while(Q2--)
	{
		scanf("%d", &qi);
		printf("%d\n", v[qi - 1]);
	}
	return 0;
}