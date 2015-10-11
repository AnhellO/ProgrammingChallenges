#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
#define W(t) while(t--)
using namespace std;

int t, nList, i;

int main() 
{
	cin >> t;
	W(t)
	{
		cin >> nList;
		vector<string> list(nList);
		FOR(i, 0, nList, 1)
			cin >> list[i];
		sort(list.begin(), list.end());
		FOR(i, 0, list.size(), 1)
		{
			if(i < list.size() - 1)
			{
				if(list[i + 1].find(list[i]) != string::npos)
				{
					cout << "NO\n";
					break;
				}
			}
		}
		if(i == list.size())
			cout << "YES\n";
	}
	return 0;
}