#include <bits/stdc++.h>
using namespace std;

int i, maxN, maxN2, d;
char maxC;
string s;
map<char, int> m;
map<char, int>::iterator it;

int main()
{
	getline(cin, s);
	while(getline(cin, s))
	{
		maxN = maxN2 = -1;
		m.clear();
		for(i = 0 ; i < s.length() ; i++)
			if(isalpha(s[i])) m[s[i]]++;
		//for(it = m.begin() ; it != m.end() ; ++it) cout << it->first << ' ' << it->second << '\n';
		for(it = m.begin() ; it != m.end() ; ++it)
		{
			if(it->second > maxN)
			{
				maxN = it->second;
				maxC = it->first;
			}
			else if(it->second == maxN) maxN2 = it->second;
		}
		if(maxN2 == maxN)
		{
			printf("NOT POSSIBLE\n");
			continue;
		}
		d = (maxC >= 69) ? maxC - 69 : 21 + (maxC - 64);
		printf("%d ", d);
		for(i = 0 ; i < s.length() ; i++)
			if(isalpha(s[i]))
				if(s[i] - d >= 65) printf("%c", s[i] - d);
				else printf("%c", 91 - (d - (s[i] - 65)));
			else printf(" ");
		printf("\n");
	}
	return 0;
}