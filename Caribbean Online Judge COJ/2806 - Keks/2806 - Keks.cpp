#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int N, K, i, j, x, y;
string number, out = "";
vector<int> pos[10];

int main()
{
    cin >> N >> K >> number;
    for(i = N - 1 ; i >= 0 ; i--) 
        pos[number[i] - '0'].push_back(i);

    x = 0, y = N - K;
    for(i = 0 ; i < y ; i++)
    {
        for(j = 9 ; j >= 0 ; j--) 
        {
            while(pos[j].size() > 0 && pos[j].back() < x ) pos[j].pop_back();
            if(pos[j].size() > 0 && N - pos[j].back() - 1 >= y - i - 1)
            {
                x = pos[j].back();
                break;
            }
        }
        out.push_back(number[x]);
        x++;
    }
    cout << out << '\n';
    return 0;
}
