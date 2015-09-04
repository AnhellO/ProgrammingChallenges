#include <bits/stdc++.h>
using namespace std;

int n, m, i, j;
string s;

int main()
{
	cin >> n >> m;
	vector<string> lect(n);
	vector<pair<string, string> > words(m);
	for(i = 0 ; i < m ; i++) cin >> words[i].first >> words[i].second;
	for(i = 0 ; i < n ; i++)
	{
		cin >> s;
		for(j = 0 ; j < m ; j++)
		{
			if(s == words[j].first)
			{
				int l1 = words[j].first.length(), l2 = words[j].second.length();
				lect[i] = (l1 < l2 || l1 == l2) ? words[j].first : words[j].second;
				break;
			}
			else if(s == words[j].second)
			{
				int l1 = words[j].first.length(), l2 = words[j].second.length();
				lect[i] = (l1 < l2 || l1 == l2) ? words[j].first : words[j].second;
				break;
			}
		}
	}
	cout << lect[0];
	for(i = 1 ; i < n ; i++) cout << ' ' << lect[i];
	cout << '\n';
	return 0;
}