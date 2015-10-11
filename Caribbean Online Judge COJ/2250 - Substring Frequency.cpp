#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

int t, iter = 0;
string a, b;

int main()
{
    cin >> t;
    while(t--)
    {
        iter++;
        vector<size_t> ocurr;
        cin >> a >> b;
        size_t i = a.find(b, 0);
        while(i != string::npos)
        {
            ocurr.push_back(i);
            i = a.find(b, i + 1);
        }
        cout << "Case " << iter << ": " << ocurr.size() << endl;
    }
    return 0;
}