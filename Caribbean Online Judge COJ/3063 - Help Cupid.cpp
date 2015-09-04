#include <cstdio>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int N, i, sum = 0, sum2 = 0;

int main()
{
	scanf("%d", &N);
	vector<int> couples(N);
	for(i = 0 ; i < N ; i++) scanf("%d", &couples[i]);
	sort(couples.begin(), couples.end());
	for(i = 0 ; i < couples.size() ; i++)
	{
		sum += min(24 - abs(couples[i] - couples[i + 1]), abs(couples[i] - couples[i + 1]));
		i++;
	}
	for(i = 1 ; i < couples.size() - 2 ; i++)
	{
		sum2 += min(24 - abs(couples[i] - couples[i + 1]), abs(couples[i] - couples[i + 1]));
		i++;
	}
	sum2 += min(24 - abs(couples[0] - couples[couples.size() - 1]), abs(couples[0] - couples[couples.size() - 1]));
	printf("%d\n", min(sum, sum2));
	return 0;
}