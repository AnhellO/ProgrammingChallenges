#include <iostream>
#include <vector>
using namespace std;

int t, i, n, temp, j;
vector<unsigned long> nums;

int main()
{
        i = 0;
        n = 1;
        while(n <= 10000000)
        {
                n += i;
                nums.push_back(n);
                i++;
        }

        cin >> t;
        while(t--)
        {
                cin >> n;
                n;
                for(i = 0 ; i < nums.size() ; i++)
                {
                        if(nums[i] > n){
                                temp = nums[i - 1];
                                j = i;
                                break;
                        }
                }
                if(j % 2 == 0)
                {
                        cout << "TERM " << n << " IS " << n - temp + 1 << "/" << j - (n - temp) << endl;
                }
                else
                {
                        cout << "TERM " << n << " IS " << j - (n - temp) << "/" << n - temp + 1 << endl;
                }
        }
}