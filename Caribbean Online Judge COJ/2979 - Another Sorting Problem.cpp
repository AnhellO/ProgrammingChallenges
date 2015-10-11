#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
 
int T, N, i, cont;
 
int main()
{
	scanf("%d", &T);
	while(T--)
	{
		scanf("%d", &N);
		vector<int> v1(N), v2;
		cont = 0;
		for(i = 0 ; i < N ; i++) scanf("%d", &v1[i]);
		v2 = v1;
		sort(v2.begin(), v2.end());
		for(i = 0 ; i < N ; i++)
			if(v1[i] != v2[i]) cont++;
		printf("%d\n", cont);
	}
	return 0;
}
