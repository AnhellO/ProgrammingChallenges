#include <bits/stdc++.h>
using namespace std;

int n, x, i, j = 0, mins = 0, m[100002] = {0};

int main()
{
	scanf("%d %d", &n, &x);
	vector<pair<int, int> > moments(n);
	for(i = 0 ; i < n ; i++) scanf("%d %d", &moments[i].first, &moments[i].second);
	for(i = 1 ; i <= moments[n - 1].second ;)
	{
		if(i + x > moments[j].first)
		{
			mins += ((moments[j].second + 1) - moments[j].first);
			mins += (moments[j].first - i);
			//printf("mins1 %d, mins2 %d\n",(moments[j].second + 1) - moments[j].first, (moments[j].first - i));
			i = moments[j].second + 1;
			j++;
		}
		else if(i + x == moments[j].first)
		{
			mins += ((moments[j].second + 1) - moments[j].first);
			i = moments[j].second + 1;
			j++;
		}
		else i += x;
		//printf("%d %d\n", i, mins);
		if(j == n) break;
	}
	printf("%d\n", mins);
	return 0;
}