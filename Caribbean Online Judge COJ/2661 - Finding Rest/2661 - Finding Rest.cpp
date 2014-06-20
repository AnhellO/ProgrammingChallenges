#include <iostream>
using namespace std;

string line;

int solve(string s)
{
	int i, mod = 0;
	for(i = 0 ; i < s.length() ; i++)
		mod = (mod * 10 + s[i] - '0') % 3;
	switch(mod)
	{
		case 0:
			mod = 1;
			break;
		case 1:
			mod = 7;
			break;
		case 2:
			mod = 4;
			break;
	}
	return mod;
}

int main()
{
	while(cin >> line) cout << solve(line) << '\n';
	return 0;
}