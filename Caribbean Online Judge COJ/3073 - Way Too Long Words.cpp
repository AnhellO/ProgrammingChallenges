#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int n, i;
string s;

int main()
{
	cin >> n;
	while(n--)
	{
		cin >> s;
		if(s.length() <= 10) cout << s << '\n';
		else cout << s[0] << s.length() - 2 << s[s.length() - 1] << '\n'; 
	}
	return 0;
}