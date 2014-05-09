#include <cstdio>
#include <vector>
#include <algorithm>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int N, i, minimum, sum;

int getSum(vector<int> v1, vector<int> v2)
{
	int i, sum = 0;
	FOR(i, 0, v1.size(), 1)
		sum += (v1[i] * v2[i]);
	return sum;
}

int main() 
{
	scanf("%d", &N);
	vector<int> v1(N), v2(N);
	FOR(i, 0, N, 1) scanf("%d", &v1[i]);
	FOR(i, 0, N, 1) scanf("%d", &v2[i]);
	minimum = getSum(v1, v2);
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	do
	{
		if(getSum(v1, v2) < minimum) minimum = getSum(v1, v2);
	}while(next_permutation(v1.begin(), v1.end()));
	do
	{
		if(getSum(v1, v2) < minimum) minimum = getSum(v1, v2);
	}while(next_permutation(v2.begin(), v2.end()));
	printf("%d\n", minimum);
	return 0;
}