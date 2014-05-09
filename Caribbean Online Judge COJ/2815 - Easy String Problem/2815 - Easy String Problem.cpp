#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int nCases, cont, pos;
string T, P;

int main() 
{
	cin >> nCases;
	while(nCases--)
	{
		cin >> T >> P;
		cont = 0;
		pos = T.find(P);
		if(pos == string::npos)
			cout << 0 << '\n';
		else
		{
			while(pos != -1)
			{
				T.erase(pos, P.length());
				cont++;
				pos = T.find(P);
			}
			cout << cont << '\n';
		}
	}
	return 0;
}