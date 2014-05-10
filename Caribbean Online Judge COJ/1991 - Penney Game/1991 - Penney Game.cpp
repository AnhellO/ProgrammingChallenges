#include <iostream>
#include <cstring>
#include <string>
#include <map>
#define W(t) while(t--)
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int t, n, i;
string line, aux;

map<string, int> create_map()
{
	map<string, int> m;
  	m["TTT"] = 0;
  	m["TTH"] = 0;
	m["THT"] = 0;
	m["THH"] = 0;
  	m["HTT"] = 0;
	m["HTH"] = 0;
	m["HHT"] = 0;
  	m["HHH"] = 0;
	return m;
}

int main() 
{
	cin >> t;
	W(t)
	{
		map<string, int> pGame = create_map();
		cin >> n >> line;
		FOR(i, 0, 38, 1)
		{
			aux.clear();
			aux.push_back(line[i]);
			aux.push_back(line[i + 1]);
			aux.push_back(line[i + 2]);
			for(std::map<string, int>::iterator it = pGame.begin() ; it != pGame.end() ; ++it)
			{
				if(it->first == aux) it->second++;
			}
		}
		cout << n;
		for(std::map<string, int>::reverse_iterator it = pGame.rbegin() ; it != pGame.rend() ; ++it)
		{
			cout << " " << it->second;
		}
		cout << '\n';
	}
	return 0;
}