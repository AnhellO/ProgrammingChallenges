#include <cstdio>
#include <algorithm>
#include <vector>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int d1, d2, d3, dices[3] = {1, 1, 1};
vector<int> sums;

int getSum(int a[])
{
	int i, sum = 0;
	FOR(i, 0, 3, 1)
		sum += a[i];
	return sum;
}

int findMin(vector<int> V)
{
	int i, max = 0, min = 0;
	sort(V.begin(), V.end());
	vector<int> counters(V[V.size() - 1]);
	FOR(i, 0, V.size(), 1)
		counters[V[i] - 1]++;
    FOR(i, 0, counters.size(), 1)
    	if(counters[i] > max)
    	{
    		min = i;
    		max = counters[i];
    	}
    return min + 1;
}

int main() 
{
	scanf("%d %d %d", &d1, &d2, &d3);
	sums.push_back(3);
	while(dices[0] <= d1)
	{
		if(dices[2] < d3) dices[2]++;
		else if(dices[2] >= d3 && dices[1] < d2) 
		{
			dices[2] = 1;
			dices[1]++;
		}
		else 
		{
			dices[2] = dices[1] = 1;
			dices[0]++;
		}
		sums.push_back(getSum(dices));
	}
	sums.pop_back();
	//int i;
	//FOR(i, 0, sums.size(), 1) printf("%d ", sums[i]);
	printf("%d\n", findMin(sums));
	return 0;
}