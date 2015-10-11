#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <map>
#define FOR1(i, a, b, c) for(i = a ; i < b ; i += c)
#define FOR2(i, a, b, c) for(i = a ; i >= b ; i -= c)
#define FOR3(i, a, b, c) for(i = a ; i <= b ; i += c)
#define VECTOR vector<string>
using namespace std;

int r, c, i, j, temp = 1, pos = 0;
string line;
VECTOR rows;
map<int, int> place;

int main()
{
    cin >> r >> c;
    FOR1(i, 0, r, 1)
    {
        cin >> line;
        rows.push_back(line);
    }

    FOR2(i, c - 2, 1, 1)
    {
        pos = 0;
        FOR1(j, 0, r, 1)
        {
            if(isdigit(rows[j][i]) && !isdigit(rows[j][i + 1]))
            {
                place[rows[j][i]] = temp;
				pos = 1;
            }
        }
        temp += pos;
    }

    FOR3(i, '1', '9', 1)
    {
        cout << place[i] << "\n";
    }
    return 0;
}