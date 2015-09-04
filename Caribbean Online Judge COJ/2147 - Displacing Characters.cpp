#include <bits/stdc++.h>
using namespace std;

int N, k;
string s;

string displace(string s)
{
	return s.substr(s.length() - 1, 1) + s.substr(0, s.length() - 1);
}

int main()
{
	cin >> N;
	while(N--)
	{
		cin >> s >> k;
		while(k--) s = displace(s);
		cout << s << '\n';
	}
	return 0;
}