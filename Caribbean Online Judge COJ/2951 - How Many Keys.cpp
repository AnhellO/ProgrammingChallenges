#include <iostream>
#include <string>
#include <utility>
#include <map>
#include <algorithm>
using namespace std;
 
int N, i, j;
string s;
bool flag;
 
int main()
{
	cin >> N;
	map<string, int> Keys;
 
	for(i = 0 ; i < N ; i++)
	{
		cin >> s;
		sort(s.begin(), s.end());
		Keys[s]++;
	}
	for(map<string, int>::iterator it = Keys.begin() ; it != Keys.end() ; ++it)
		if(it->second > 1)
			N -= --it->second;
	cout << N << '\n';
	return 0;
}