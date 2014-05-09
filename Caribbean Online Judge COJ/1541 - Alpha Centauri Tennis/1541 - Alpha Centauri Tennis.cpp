#include <iostream>
#include <cstring>
using namespace std;

int T, N;
string s;

int main() 
{
	cin >> T;
	while(T--)
	{
		cin >> N >> s;
		cout << s[s.length() - 1] << '\n';
	}
	return 0;
}