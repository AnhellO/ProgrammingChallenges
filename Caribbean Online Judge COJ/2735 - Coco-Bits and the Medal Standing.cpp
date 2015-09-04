#include <cstdio>
#include <vector>
#include <utility>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int g, s, b, i, j;
vector<pair<pair<int, int>, pair<int, int> > > mTable;

void initBubbleSort()
{
	int i, j, k;
	pair<pair<int, int>, pair<int, int> >  aux;
	FOR(i, 0, 7, 1)//Comparar Oro
	{
		FOR(j, 0, 6, 1)
		{
			if(mTable[j].first.second < mTable[j + 1].first.second)
			{
				aux = mTable[j];
				mTable[j] = mTable[j + 1];
				mTable[j + 1] = aux;
			}
		}
	}
	FOR(k, 0, 7, 1)//Igual Oro, comparar Plata
	{
		if(mTable[k + 1].first.second == mTable[k].first.second)
			FOR(i, k, 7, 1)
			{
				FOR(j, k, 6, 1)
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
	FOR(k, 0, 7, 1) //Igual Oro, igual plata, Comparar Bronce
	{
		if(mTable[k + 1].second.first == mTable[k].second.first)
			FOR(i, k, 7, 1)
			{
				FOR(j, k, 6, 1)
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
	FOR(k, 0, 7, 1) //Igual Oro, igual plata, igual Bronce, comparar ID
	{
		if(mTable[k + 1].second.second == mTable[k].second.second)
			FOR(i, k, 7, 1)
			{
				FOR(j, k, 6, 1)
				{
					if(mTable[j].first.first > mTable[j + 1].first.first && mTable[j].first.second <= mTable[j + 1].first.second && mTable[j].second.first <= mTable[j + 1].second.first && mTable[j].second.second <= mTable[j + 1].second.second)
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
	FOR(i, 0, 7, 1)
	{
		scanf("%d %d %d", &g, &s, &b);
		mTable.push_back(make_pair(make_pair(i + 1, g), make_pair(s, b)));
	}
	initBubbleSort();
	FOR(i, 0, 7, 1)
		printf("Facultad %d %d %d %d\n", mTable[i].first.first, mTable[i].first.second, mTable[i].second.first, mTable[i].second.second);
	return 0;
}