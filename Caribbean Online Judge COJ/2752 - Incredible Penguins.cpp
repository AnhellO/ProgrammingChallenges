#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cstring>
#include <cmath>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int N, i, iD, j;
string name;
vector<pair<int, string> > penguins;
vector<string> fAlone;

int main() 
{
	cin >> N;
	FOR(i, 0, N, 1)
	{
		cin >> name >> iD;
		penguins.push_back(make_pair(abs(iD), name));
	}
	FOR(i, 0, N, 1)
	{
		FOR(j, 0, N, 1)
			if(penguins[i].first == penguins[j].first && penguins[i].second != penguins[j].second) break;
		if(j == N)
			fAlone.push_back(penguins[i].second);
	}
	cout << "FOREVER ALONE ones:\n";
	FOR(i, 0, fAlone.size(), 1)
		cout << fAlone[i] << '\n';
	return 0;
}