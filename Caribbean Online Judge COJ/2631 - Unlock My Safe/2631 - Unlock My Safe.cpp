#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
#define W(t) while(t--)
#define PB(v, m) v.push_back(m);
using namespace std;

int t, n, i;
string pass;
vector<string> pPass;

int main() 
{
	cin >> t;
	W(t)
	{
		cin >> n;
		if(n == 1)
			cout << 1 << '\n';
		else
		{
			pass.clear();
			pPass.clear();
			FOR(i, 0, n, 1)
				PB(pass, (i + 1) + '0');
			do
			{
				PB(pPass, pass);
			}while(next_permutation(pass.begin(), pass.end()));
			cout << pPass[pPass.size() / 3] << '\n';
		}
	}
	return 0;
}