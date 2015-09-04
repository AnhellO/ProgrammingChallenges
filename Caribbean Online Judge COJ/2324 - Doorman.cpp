#include <bits/stdc++.h>
using namespace std;

int X, i, handle = 0;
string s;

int main()
{
	cin >> X >> s;
	for(i = 0 ; i < s.length() ; i++)
	{
		handle = (s[i] == 'M') ? handle + 1 : handle - 1;
		if(abs(handle) > X + 1)
		{
			cout << i - 1 << '\n';
			return 0;
		}
	}
	cout << i << '\n';
	return 0;
}