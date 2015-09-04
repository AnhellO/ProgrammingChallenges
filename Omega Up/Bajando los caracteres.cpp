#include <iostream>
#include <string>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int i;
string s;

int main()
{
	cin >> s;
	FOR(i, 0, s.length(), 1)
		cout << s[i] << "\n";
	return 0;
}