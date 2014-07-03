#include <iostream>
#include <string>
using namespace std;

int T;
string word;

int isRepeated(string s)
{
	int i;
	for(i = 0 ; i < s.length() ; i++)
		if(s[i] == s[i + 1])
			return i;
	return -1;
}

int main()
{
	cin >> T;
	while(T--)
	{
		cin >> word;
		while(isRepeated(word) != -1) word.erase(isRepeated(word), 2);
		cout << word << '\n';
	}
	return 0;
}