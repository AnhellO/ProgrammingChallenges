#include <bits/stdc++.h>
using namespace std;

int i;
string s;
bool flag = false;

int main()
{
	while(getline(cin, s))
	{
		for(i = 0 ; i < s.length() ; i++)
		{
			if(s[i] == '"')
			{
				if(!flag)
				{
					s[i] = '`';
					s.insert(i, "`");
					flag = true;
				}
				else
				{
					s[i] = '\'';
					s.insert(i, "\'");
					flag = false;
				}
			}
		}
		cout << s << '\n';
	}
	return 0;
}