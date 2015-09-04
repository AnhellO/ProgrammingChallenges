#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int i;
string line;
vector<string> summands;

vector <string> split(const string& str, const string& delimiter)
{
    vector <string> tokens;

    string::size_type lastPos = 0;
    string::size_type pos = str.find(delimiter, lastPos);

    while (string::npos != pos)
    {
        tokens.push_back(str.substr(lastPos, pos - lastPos));
        lastPos = pos + delimiter.size();
        pos = str.find(delimiter, lastPos);
    }

    tokens.push_back(str.substr(lastPos, str.size() - lastPos));
    return tokens;
}

int main() 
{
	cin >> line;
	summands = split(line, "+");
	sort(summands.begin(), summands.end());
	cout << summands[0];
	FOR(i, 1, summands.size(), 1)
		cout << '+' << summands[i];
	cout << '\n';
	return 0;
}