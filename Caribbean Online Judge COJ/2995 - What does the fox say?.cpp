#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
 
int T, i;
char c;
string s;
vector<string> sounds, animal, animalS, fox;
 
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
	cin >> T;
	scanf("%c", &c);
	while(T--)
	{
		getline(cin, s);
		sounds = split(s, " ");
		while(getline(cin, s))
		{
			if(s.find("fox") != string::npos) break;
			animal = split(s, " ");
			animalS.push_back(animal[animal.size() - 1]);
		}
		sort(animalS.begin(), animalS.end());
		for(i = 0 ; i < sounds.size() ; i++)
			if(!binary_search(animalS.begin(), animalS.end(), sounds[i])) fox.push_back(sounds[i]);
		cout << fox[0];
		for(i = 1 ; i < fox.size() ; i++) cout << ' ' << fox[i];
		cout << '\n';
		animalS.clear();
		fox.clear();
	}
	return 0;
}