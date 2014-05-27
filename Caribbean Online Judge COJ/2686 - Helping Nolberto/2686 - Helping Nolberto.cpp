#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <sstream>
#define W(t) while(t--)
#define FOR1(i, a, b, c) for(i = a ; i < b ; i += c)
#define FOR2(i, a, b, c) for(i = a ; i >= b ; i -= c)
using namespace std;

int n, i, j;
string line;

vector<string> split(string s, string regex)
{
	vector<string> sections;
	int pos = s.find_first_of(regex);
	string subS;
 
	while(pos != string::npos)
	{
		subS = s.substr(0, pos);
		s.erase(0, pos + 1);
		sections.push_back(subS);
		pos = s.find_first_of(regex);
	}
	sections.push_back(s);
	return sections;
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
	getline(cin, line);
	n = toInteger(line);
	W(n)
	{
		getline(cin, line);
		vector<string> sections = split(line, " ");
		FOR1(i, 0, sections.size(), 1)
			FOR1(j, 0, sections[i].length(), 1)
				sections[i][j] = toupper(sections[i][j]);
		FOR1(i, 0, sections.size(), 1)
		{
			FOR2(j, sections[i].length() - 1, 0, 1)
				if(sections[i][j] != 'S') break;
			if(i < sections.size() - 1) cout << sections[i].erase(j + 1, sections[i].length()) << ' ';
			else cout << sections[i].erase(j + 1, sections[i].length());
		}
		cout << '\n';
	}
	return 0;
}