#include <iostream>
#include <cstring>
#include <string>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int N, i;
string row;

bool isOk(string row)
{
	int i;
	FOR(i, 0, row.length(), 1)
		if(row[i] != 'S' && row[i] != '*') return false;
	return true;
}

int main() 
{
	cin >> N >> row;
	if(N == 1) cout << 2 << '\n';
	else
	{
		row.insert(0, "*");
		FOR(i, 1, row.length(), 1)
		{
			if(row[i] == 'S') 
			{
				row.insert(i + 1, "*");
				i++;
			}
			else
			{
				row.insert(i + 2, "*");
				i += 2;
			}
		}
		N = 0;
		FOR(i, 0, row.length(), 1) 
			if(row[i] == '*') N++;
		cout << ((isOk(row)) ? N - 1 : N) << '\n';
	}
	return 0;
}