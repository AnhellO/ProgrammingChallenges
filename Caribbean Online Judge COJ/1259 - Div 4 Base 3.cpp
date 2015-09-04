#include <iostream>
using namespace std;

int N, sum, i, j;
string s;

int main()
{
	cin >> N;
	while(N--)
	{
		cin >> s;
		sum = 0;
		for(i = 0, j = s.length() - 1 ; i < s.length() ; i++, j--)
		{
			sum = (j % 2) ? (sum + (s[i] * 3) % 4) % 4 : (sum + s[i]) % 4;
		}
		cout << ((sum) ? "NO\n" : "YES\n");
	}
	return 0;
}