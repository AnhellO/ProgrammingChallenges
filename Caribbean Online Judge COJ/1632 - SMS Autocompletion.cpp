#include <iostream>
#include <cstring>
#include <vector>
#include <utility>
using namespace std;

int i, j;
string s, temp = "", codes[] = {"abc", "def", "ghi", "jkl", "mno", "pqr", "stu", "vwx", "yz"};
vector<pair<string, string> > user, alpha;

string getCode(string s)
{
	int i, j;
	string code = "";
	for(i = 0 ; i < s.length() ; i++)
	{
		for(j = 0 ; j < 9 ; j++)
		{
			if(codes[j].find(s[i]) != string::npos)
			{
				code += ((j + 1) + '0');
				break;
			}
		}
	}
	return code;
}

int main()
{
	while(cin >> s)
	{
		if(s == "-----")
		{
			temp = s;
			continue;
		}
		(temp == "-----") ? alpha.push_back(make_pair(s, getCode(s))) : user.push_back(make_pair(s, getCode(s)));
	}
	for(i = 0 ; i < user.size() ; i++)
	{
		cout << "-----\n";
		for(j = 0 ; j < alpha.size() ; j++) if(user[i].second == alpha[j].second) cout << alpha[j].first << '\n';
	}
	cout << "-----\n";
	return 0;
}