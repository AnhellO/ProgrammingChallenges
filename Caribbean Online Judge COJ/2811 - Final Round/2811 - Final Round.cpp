#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <sstream>
using namespace std;

int T, i, j, k, points, pos;
string line, subS, name, carrera;

struct predicate
{
	bool operator()(pair<string, pair<string, int> > first, pair<string, pair<string, int> > second)
	{
		return first.second.first < second.second.first;
	}
};

int toInteger(string n)
{
	int newN;
	stringstream ss;
	ss << n;
	ss >> newN;
	return newN;
}

int findIndex(vector<pair<string, pair<string, int> > > table, string c)
{
	int i;
	for(i = 0 ; i < table.size() ; i++)
		if(c == table[i].first)
			return i;
	return -1;
}

int main() 
{
	getline(cin, line);
	T = toInteger(line);
	for(i = 0 ; i < T ; i++)
	{
		vector<pair<string, pair<string, int> > > table;
		while(1)
		{
			
			if(!getline(cin, line) || line.empty()) 
			{
				for(k = 0 ; k < table.size() ; k++)
				{
					pos = table[k].second.first.find_first_of("*");
					while(pos != string::npos)
					{
						table.push_back(make_pair(table[k].first, make_pair(table[k].second.first.substr(0, pos), points)));
						table[k].second.first.erase(0, pos + 1);
						pos = table[k].second.first.find("*");
					}
				}
				sort(table.begin(), table.end(), predicate());
				cout << "List " << i + 1 << '\n';
				for(k = 0 ; k < table.size() ; k++)
				{
					cout << table[k].second.first << ' ' << table[k].first << '\n';
				}
				break;
			}
			pos = line.find_last_of(" ");
			//cout << pos << '\n';
			subS = line.substr(pos + 1, line.length() - 1);
			points = toInteger(subS);
			subS = line.substr(0 ,pos);
			carrera = subS.substr(subS.find_last_of(" ") + 1, subS.length() - 1);
			name = subS.substr(0, subS.find_last_of(" "));
			j = findIndex(table, carrera);
			if(j != -1)
			{
				if(points > table[j].second.second)
				{
					table[j].second.first = name;
					table[j].second.second = points;
				}
				else if(points == table[j].second.second)
				{
					table[j].second.first.append("*").append(name);
				}
			}
			else
			{
				table.push_back(make_pair(carrera, make_pair(name, points)));
			}
		}
	}
	return 0;
}