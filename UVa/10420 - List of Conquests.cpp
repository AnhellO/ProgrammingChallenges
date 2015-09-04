#include <bits/stdc++.h>
using namespace std;

int n;
char s[100];
map<string, int> m;

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

int main()
{
	scanf("%d", &n);
	getchar();
	while(n--)
	{
		gets(s);
		vector<string> v = split(s, " ");
		m[v[0]]++;
	}
	for(map<string, int>::iterator it = m.begin() ; it != m.end() ; ++it)
		cout << it->first << ' ' << it->second << '\n';
	return 0;
}