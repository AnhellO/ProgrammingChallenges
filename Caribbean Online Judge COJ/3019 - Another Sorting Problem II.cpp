#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
 
int T, N, i, sum;
 
int main()
{
	scanf("%d", &T);
	while(T--)
	{
		scanf("%d", &N);
		vector<int> v1(N), v2;
		sum = 0;
		for(i = 0 ; i < N ; i++) scanf("%d", &v1[i]);
		v2 = v1;
		sort(v2.begin(), v2.end());
		for(i = 0 ; i < N ; i++)
			sum += abs(v2[i] - v1[i]);
		printf("%d\n", sum);
	}
	return 0;
}