#include <cstdio>
#include <vector>
#include <algorithm>
#define FOR1(i, a, b, c) for(i = a ; i < b ; i += c)
#define FOR2(i, a, b, c) for(i = a ; i >= b ; i -= c)
using namespace std;

int V, N, i, cont = 0;

int main() 
{
	scanf("%d %d", &V, &N);
	vector<int> nums(N);
	FOR1(i, 0, N, 1)
		scanf("%d", &nums[i]);
	sort(nums.begin(), nums.end());
	FOR2(i, nums.size() - 1, 0, 1)
		if(nums[i] + nums[0] + nums[1] > V)
			cont++;
		else
			break;
	printf("%d\n", nums.size() - cont);
	return 0;
}