#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <utility>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;
 
int g, s, b, i, j;
string countrie;
vector<pair<pair<string, int>, pair<int, int> > > mTable;
 
void initBubbleSort()
{
	int i, j, k;
	pair<pair<string, int>, pair<int, int> >  aux;
	FOR(i, 0, mTable.size(), 1)//Comparar Oro
	{
		FOR(j, 0, mTable.size() - 1, 1)
		{
			if(mTable[j].first.second < mTable[j + 1].first.second)
			{
				aux = mTable[j];
				mTable[j] = mTable[j + 1];
				mTable[j + 1] = aux;
			}
		}
	}
	FOR(k, 0, mTable.size(), 1)//Igual Oro, comparar Plata
	{
		if(mTable[k + 1].first.second == mTable[k].first.second)
			FOR(i, k, mTable.size(), 1)
			{
				FOR(j, k, mTable.size() - 1, 1)
				{
					if(mTable[j].second.first < mTable[j + 1].second.first && mTable[j].first.second <= mTable[j + 1].first.second)
					{
						aux = mTable[j];
						mTable[j] = mTable[j + 1];
						mTable[j + 1] = aux;
					}
				}
			}
	}
	FOR(k, 0, mTable.size(), 1) //Igual Oro, igual plata, Comparar Bronce
	{
		if(mTable[k + 1].second.first == mTable[k].second.first)
			FOR(i, k, mTable.size(), 1)
			{
				FOR(j, k, mTable.size() - 1, 1)
				{
					if(mTable[j].second.second < mTable[j + 1].second.second && mTable[j].first.second <= mTable[j + 1].first.second && mTable[j].second.first <= mTable[j + 1].second.first)
					{
						aux = mTable[j];
						mTable[j] = mTable[j + 1];
						mTable[j + 1] = aux;
					}
				}
			}
	}
	FOR(k, 0, mTable.size(), 1) //Igual Oro, igual plata, igual Bronce, comparar ID
	{
		if(mTable[k + 1].second.second == mTable[k].second.second)
			FOR(i, k, mTable.size(), 1)
			{
				FOR(j, k, mTable.size() - 1, 1)
				{
					if(mTable[j].first.first[0] > mTable[j + 1].first.first[0] && mTable[j].first.second <= mTable[j + 1].first.second && mTable[j].second.first <= mTable[j + 1].second.first && mTable[j].second.second <= mTable[j + 1].second.second)
					{
						aux = mTable[j];
						mTable[j] = mTable[j + 1];
						mTable[j + 1] = aux;
					}
				}
			}
	}
}
 
int main() 
{
	while(cin >> countrie)
	{
		if(countrie == "#")
		{
			initBubbleSort();
			FOR(i, 0, mTable.size(), 1)
				cout << mTable[i].first.first << '\n';
			mTable.clear();
			break;
		}
		else if(countrie == "@")
		{
			initBubbleSort();
			FOR(i, 0, mTable.size(), 1)
				cout << mTable[i].first.first << '\n';
			mTable.clear();
			cout << "@\n";
		}
		else
		{
			cin >> g >> s >> b;
			mTable.push_back(make_pair(make_pair(countrie, g), make_pair(s, b)));
		}
	}
	return 0;
}