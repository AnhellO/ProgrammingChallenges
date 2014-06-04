#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
 
int T, N, i;
char s[41];
 
int main()
{
	scanf("%d", &T);
	while(T--)
	{
		scanf("%d", &N);
		vector<double> angles(N);
		double max = 0.0;
		for(i = 0 ; i < N ; i++) scanf("%s %lf", &s, &angles[i]);
		sort(angles.begin(), angles.end());
		angles.push_back(angles[0] + 360.0);
		for(i = 1 ; i <= N ; i++)
			if(angles[i] - angles[i - 1] > max) max = angles[i] - angles[i - 1];
		printf("%d\n", (int)ceil((360.0 - max) * 12.0));
	}
	return 0;
}
