#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int N, i, j, k;
string s;
bool flag;
vector<pair<string, int> > cans;

int ic_strcmp(string s1, string s2)
{
    int i;
    for(i = 0 ; s1[i] && s2[i] ; i++)
    {
        if(s1[i] == s2[i] || (s1[i] ^ 32) == s2[i]) continue;
        else break;
    }
    if(s1[i] == s2[i]) return 0;
    if((s1[i] | 32) < (s2[i] | 32)) return -1;
    return 1;
}

void initBubbleSort()
{
	int i, j, k;
	pair<string, int> aux;
	for(i = 0 ; i < cans.size() ; i++)
	{
		for(j = 0 ; j < cans.size() - 1 ; j++)
		{
			if(cans[j].second < cans[j + 1].second)
			{
				aux = cans[j];
				cans[j] = cans[j + 1];
				cans[j + 1] = aux;
			}
		}
	}
	for(k = 0 ; k < cans.size() ; k++)
	{
		if(cans[k + 1].second == cans[k].second)
		{
			for(i = k ; i < cans.size() ; i++)
			{
				for(j = k ; j < cans.size() - 1 ; j++)
				{
					if(cans[j].second <= cans[j + 1].second && ic_strcmp(cans[j].first, cans[j + 1].first) > 0)
					{
						aux = cans[j];
						cans[j] = cans[j + 1];
						cans[j + 1] = aux;
					}
				}
			}
		}
	}
}

int main()
{
	while(cin >> N && N)
	{
		cans.clear();
		vector<string> ordered(N);
		for(i = 0 ; i < N ; i++)
		{
			cin >> s >> j;
			cans.push_back(make_pair(s, j));
		}
		initBubbleSort();
		flag = true;
		for(i = N / 2, j = i - 1, k = 0 ; k < N ; k++)
		{
			if(!flag)
			{
				ordered[j] = cans[k].first;
				j--;
				flag = true;
			}
			else
			{
				ordered[i] = cans[k].first;
				i++;
				flag = false;
			}
		}
		for(i = 0 ; i < N ; i++)
			cout << ((i) ? " " : "") << ordered[i];
		cout << '\n';
		//for(i = 0 ; i < N ; i++)
		//	cout << cans[i].first << ' ' << cans[i].second << endl;
		//cout << endl;
	}
	return 0;
}
