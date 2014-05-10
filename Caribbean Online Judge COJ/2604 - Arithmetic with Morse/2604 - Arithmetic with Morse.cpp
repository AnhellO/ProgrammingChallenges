#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
#define PB(v, m) v.push_back(m)
using namespace std;

unsigned long long int N, i, j, sum;
string line;
vector<string> expressions, ops;
vector<unsigned long long int> values;

int main()
{
    cin >> N;
    FOR(i, 0, 2 * N + 1, 1)
    {
        cin >> line;
        if(line != "+" && line != "*")
            PB(expressions, line);
        else
            PB(ops, line);
    }
    FOR(i, 0, expressions.size(), 1)
    {
        sum = 0;
        FOR(j, 0, expressions[i].length(), 1)
        {
            if(expressions[i][j] == '.')
                sum += 1;
            else if(expressions[i][j] == ':')
                sum += 2;
            else if(expressions[i][j] == '-')
                sum += 5;
            else
                sum += 10;
        }
        PB(values, sum);
    }
    FOR(i, 0, ops.size(), 1)
    {
        if(ops[i] == "*")
        {
            values[i + 1] *= values[i];
            values[i] = 0;
        }
        else
            continue;
    }
    sum = 0;
    FOR(i, 0, values.size(), 1)
    {
        sum += values[i];
    }
    cout << sum << "\n";
    return 0;
}