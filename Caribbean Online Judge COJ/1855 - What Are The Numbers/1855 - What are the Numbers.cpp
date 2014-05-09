#include <cstdio>
#include <map>
using namespace std;

int T, N, i, val;
map<int, int> nums;
bool flag;

int main() 
{
	scanf("%d", &T);
	while(T--)
	{
		scanf("%d", &N);
		flag = false;
		nums.clear();
		for(i = 0 ; i < N ; i++)
		{
			scanf("%d", &val);
			if(nums.empty()) nums[val] = val;
			else
			{
				if(nums.find(val) != nums.end()) 
				{
					printf("%d\n", val);
					flag = true;
				}
				else nums[val] = val;
			}
		}
		if(!flag) printf("Not found!\n");
	}
	return 0;
}