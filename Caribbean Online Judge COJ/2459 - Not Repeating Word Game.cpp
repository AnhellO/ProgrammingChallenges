#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int i = 3;
string line;
vector<string> player1, player2, player3;

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

int solve(vector<string> v1, vector<string> v2, vector<string> v3)
{
	int i, cont = 0;
	bool flag1, flag2;
	for(i = 0 ; i < v1.size() ; i++)
	{
		if(v1[i].empty()) continue;
		if(binary_search(v2.begin(), v2.end(), v1[i])) flag1 = true;
		if(binary_search(v3.begin(), v3.end(), v1[i])) flag2 = true;
		if(flag1 && flag2) cont++;
		else if((flag1 && !flag2) || (!flag1 && flag2)) cont += 2;
		else cont += 3;
		flag1 = flag2 = false;
	}
	return cont;
}

int main() 
{
	while(getline(cin, line))
	{
		if(i == 3) 
		{
			player1 = split(line, " ");
			i--;
		}
		else if(i == 2)
		{
			player2 = split(line, " ");
			i--;
		}
		else if(i == 1)
		{
			player3 = split(line, " ");
			i--;
			sort(player1.begin(), player1.end());
			sort(player2.begin(), player2.end());
			sort(player3.begin(), player3.end());
			cout << solve(player1, player2, player3) << '/' << solve(player2, player1, player3) << '/' << solve(player3, player1, player2) << '\n';
		}
		else
		{
			i = 3;
			continue;
		}
	}
	return 0;
}