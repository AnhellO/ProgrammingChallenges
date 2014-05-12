#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <sstream>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int N, i, j;
string name, temp, aux;
vector<string> sections, userIds, surN1, surN2;

vector<string> split(string s, string regex)
{
	vector<string> sections;
	int pos = s.find_first_of(regex);
	string subS;
	
	while(pos != string::npos)
	{
		subS = s.substr(0, pos);
		s.erase(0, pos + 1);
		sections.push_back(subS);
		pos = s.find_first_of(regex);
	}
	sections.push_back(s);
	return sections;
}

int toInteger(string n)
{
	int newN;
	stringstream ss;
	ss << n;
	ss >> newN;
	return newN;
}

string toLower(string s)
{
	int i;
	FOR(i, 0, s.length(), 1)
		s[i] = tolower(s[i]);
	return s;
}

bool checkBack(vector<string> V, string s, int j)
{
	int i;
	FOR(i, 0, V.size(), 1)
		if(j != i)
			if(V[i].find(s) != std::string::npos)
				return true;
	return false;
}

int main() 
{
	getline(cin, name);
	N = toInteger(name);
	cout << "Lista de Usuarios del Congreso FEU:\n";
	FOR(i, 0, N, 1)
	{
		getline(cin, name);
		temp.clear();
		sections = split(name, " ");
		if(sections.size() == 3) 
		{
			temp.push_back(sections[0][0]);
			userIds.push_back(temp);
			surN1.push_back(sections[1]);
			surN2.push_back(sections[2]);
		} 
		else
		{
			temp.push_back(sections[0][0]);
			temp.push_back(sections[1][0]);
			userIds.push_back(temp);
			surN1.push_back(sections[2]);
			surN2.push_back(sections[3]);
		}
	}
	FOR(i, 0, userIds.size(), 1)
	{
		aux = userIds[i] + surN1[i];
		if(!checkBack(userIds, aux, i))
			userIds[i].append(surN1[i]);
		else
			userIds[i].append(surN2[i]);
		cout << "user" << i + 1 << ": " << toLower(userIds[i]) << '\n';
	}
	return 0;
}
