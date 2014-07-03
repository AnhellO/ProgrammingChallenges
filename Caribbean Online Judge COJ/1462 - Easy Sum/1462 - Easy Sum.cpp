#include <iostream>
#define MOD 128
using namespace std;

int N, i, total = 0;
string number;

int module(string N)
{
	int i, j = 0, mod = 0;
	for(i = 0 ; i < N.length() ; i++) mod = (mod * 10 + N[i] - '0') % MOD;
	return mod;
}

int main()
{
	cin >> N;
	while(N--)
	{
		cin >> number;
		total = (total + module(number)) % MOD;
	}
	cout << total;
	return 0;
}