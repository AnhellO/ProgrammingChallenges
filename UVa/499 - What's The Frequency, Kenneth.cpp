#include <bits/stdc++.h>
using namespace std;

int i;
string s;

int main()
{
	while(getline(cin, s))
	{
		map<char, int> m;
		for(i = 0 ; i < s.length() ; i++)
			if(isalpha(s[i]))
				m[s[i]]++;
		string out;
		int most = -1;
		for(map<char, int>::iterator it = m.begin() ; it != m.end() ; ++it)
			if(it->second > most) most = it->second;
		for(map<char, int>::iterator it = m.begin() ; it != m.end() ; ++it)
			if(it->second == most)
				out.push_back(it->first);
		sort(out.begin(), out.end());
		cout << out << ' ' << most << '\n';
	}
	return 0;
}