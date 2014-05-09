#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#define W(t) while(t--)
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int N, k, i, j, newN;
vector<string> sections;
stringstream ss;

vector<string> split(const string& str, const string& delimiter)
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

bool canSum(vector<string> vects)
{
	int i, j, n = 0, count;
	FOR(i, 0, vects[0].length(), 1)
		if(vects[0][i] == ',') n++;
	FOR(i, 1, vects.size(), 1)
	{
		count = 0;
		FOR(j, 0, vects[i].length(), 1)
			if(vects[i][j] == ',') count++;
		if(count != n) return false;
	}
	return true;
}

int main() 
{
	cin >> N;
	W(N)
	{
		cin >> k;
		vector<string> vects(k);
		vector<int> sums;
		FOR(i, 0, k, 1)
		{
			cin >> vects[i];
			vects[i].erase(0, 1);
			vects[i].erase(vects[i].length() - 1, vects[i].length() - 1);
		}
		sort(vects.begin(), vects.end());
		//FOR(i, 0, k, 1)
		//	cout << vects[i] << ' ';
		if(canSum(vects))
		{
			FOR(i, 0, vects.size(), 1)
			{
				sections = split(vects[i], ",");
				FOR(j, 0, sections.size(), 1)
				{
					ss.clear();
					ss << sections[j];
					ss >> newN;
					if(!i) sums.push_back(newN); else sums[j] += newN;
				}
			}
			cout << '{' << sums[0];
			FOR(i, 1, sums.size(), 1)
				cout << ',' << sums[i];
			cout << "}\n";
		}
		else
			cout << "No solution\n";
	}
	return 0;
}