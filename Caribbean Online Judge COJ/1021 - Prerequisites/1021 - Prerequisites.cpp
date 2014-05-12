#include <iostream>
#include <vector>
#include <algorithm>
#define W(T) while(T--)
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int k, m, c, r, i, j;
bool flag;

int main() 
{
	while(cin >> k)
	{
		if(!k) break;
		flag = false;
		cin >> m;
		vector<int> fCourses(k);
		FOR(i, 0, k, 1) cin >> fCourses[i];
		sort(fCourses.begin(), fCourses.end());
		W(m)
		{
			cin >> c >> r;
			W(c)
			{
				cin >> j;
				if(!r) continue;
				if(binary_search(fCourses.begin(), fCourses.end(), j)) r--;
			}
			if(r) flag = true;
		}
		cout << ((flag) ? "no\n" : "yes\n");
	}
	return 0;
}