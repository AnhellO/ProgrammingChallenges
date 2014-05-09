#include <iostream>
#include <cstring>
#include <string>
#include <sstream>
#include <vector>
#include <cctype>
#include <algorithm>
#define W(t) while(t--)
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
#define CL(m) m.clear()
using namespace std;

int T, newN, i;
string ip;
vector<string> sections;

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

bool isNumeric(string ad)
{
	int i;
	FOR(i, 0, ad.length(), 1)
		if(!isdigit(ad[i]))
			return false;
	return true;
}

int toInteger(string n)
{
	int newN;
	stringstream ss;
	ss << n;
	ss >> newN;
	return newN;
}

int main() 
{
	cin >> T;
	W(T)
	{
		CL(ip);
		CL(sections);
		cin >> ip;
		replace(ip.begin(), ip.end(), '.', ' ');
		sections = split(ip, " ");
		if(sections.size() != 4 && sections.size() != 6)
			cout << "NO\n";
		else
		{	
			FOR(i, 0, sections.size(), 1)
			{
				if(isNumeric(sections[i]))
				{
					newN = toInteger(sections[i]);
					//cout << newN << '\n';
					if(newN > 255 || newN < 0)
					{
						cout << "NO\n";
						break;
					}
				}
				else
				{
					cout << "NO\n";
					break;
				}
			}
			if(i == sections.size()) cout << "SI\n";
		}
	}
	return 0;
}