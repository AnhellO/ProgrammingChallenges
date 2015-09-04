#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <locale>
using namespace std;

int T, i, j, contVowels, contPhrases;
bool flag;
string line;
vector<string> sections;

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

int toInteger(string s)
{
	int N;
	stringstream ss;
	ss << s;
	ss >> N;
	return N;
}

bool isVowel(char ch)
{
    const string vowels("aeiou");
    return vowels.end() != find(vowels.begin(), vowels.end(), ch);
}

int main()
{
	getline(cin, line);
	T = toInteger(line);
	while(T--)
	{
		contPhrases = 3;
		flag = 0;
		while(contPhrases--)
		{
			contVowels = 0;
			getline(cin, line);
			sections = split(line, " ");
			for(i = 0 ; i < sections.size() ; i++)
				for(j = 0 ; j < sections[i].length() ; j++)
					if(isVowel(sections[i][j]))
						contVowels++;
			//cout << contPhrases << ' ' << contVowels << endl;
			if(contPhrases != 1)
			{
				if(contVowels != 5) flag = true;
			}
			else
			{
				if(contVowels != 7) flag = true;
			}
			if(flag) break;
		}
		cout << ((!flag) ? "YES\n" : "NO\n");
	}
	return 0;
}