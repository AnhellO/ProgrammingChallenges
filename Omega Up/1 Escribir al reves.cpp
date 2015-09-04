#include <iostream>
#include <cstring>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

string s;

int main()
{
	getline(cin, s);
	cout << string(s.rbegin(), s.rend()) << "\n";
	return 0;
}