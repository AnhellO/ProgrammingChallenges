#include <iostream>
#include <cstring>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int n, t, i, j = 0, cont;
string shinigami, trash;

int main()
{
	cin >> n;
	string fam[n];
	FOR(i, 0, n * 2, 1)
	{
		if(i % 2)
		{
			cin >> fam[j];
			j++;
		}
		else
			cin >> trash;
	}
	cin >> t;
	FOR(i, 0, t * 2, 1)
	{
		if(i % 2)
		{
			cin >> shinigami;
			cont = 0;
			FOR(j, 0, n, 1)
			{
				if(shinigami == fam[j])
					cont++;
			}
			cout << cont << "\n";
		}
		else
			cin >> trash;
	}
}