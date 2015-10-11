#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int n, h, l, i, val;
vector<int> nums;
double average;

int main()
{
    while(true)
    {
        scanf("%d %d %d", &h, &l, &n);
        if(n == 0 && h == 0 && l == 0)
            break;

        average = 0;
        nums.clear();

        for(i = 0 ; i < n ; i++)
        {
            scanf("%d", &val);
            nums.push_back(val);
        }
        sort(nums.begin(), nums.end());
        for(i = l ; i < n - h ; i++)
        {
                average += nums[i];
        }
        average /= (n - h) - l;
        printf("%.6f\n", average);
    }
    return 0;
}