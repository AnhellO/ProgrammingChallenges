#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>
using namespace std;

int i, j, val, maxVal = 0;
string line, temp;
vector<int> indexes;
vector<string> sections, save;

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

int main()
{
	while(getline(cin, line))
	{
		if(line.empty()) continue;
		sections = split(line, " ");
		sections.erase(remove(sections.begin(), sections.end(), ""), sections.end());
		save.insert(save.end(), sections.begin(), sections.end());
		for(i = 0 ; i < sections.size() ; i++)
		{
			val = 0;
			for(j = 0 ; j < sections[i].length() ; j++)
				if(isalpha(sections[i][j]))
					if(islower(sections[i][j]))
						val += (sections[i][j] - 97);
			//cout << val << ' ';
			if(maxVal < val)
			{
				maxVal = val;
				temp = sections[i];
			}
		}
	}
	for(i = 0 ; i < save.size() ; i++)
	{
		val = 0;
		for(j = 0 ; j < save[i].length() ; j++)
			if(isalpha(save[i][j]))
				if(islower(save[i][j]))
					val += (save[i][j] - 97);
		if(val == maxVal)
			indexes.push_back(i + 1);
	}
	cout << maxVal << '\n';
	for(i = 0 ; i < indexes.size() ; i++) cout << indexes[i] << '\n';
	return 0;
}