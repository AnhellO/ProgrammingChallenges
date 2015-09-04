#include <bits/stdc++.h>
using namespace std;

int i, cont;
string s;

int main()
{
	while(getline(cin, s))
	{
		cont = 0;
		for(i = 0 ; i < s.length() ; i++)
			if(isalpha(s[i - 1]) && (!isalpha(s[i]) || i == s.length() - 1))
				cont++;
		cout << cont << '\n';
	}
	return 0;
}