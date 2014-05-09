#include <iostream>
#include <cstring>
#include <string>
#define W(T) while(T--)
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int N;
string key, word;

bool validate(string key, string word)
{
	int i, j;
	FOR(i, 0, word.length(), 1)
	{
		FOR(j, 0, key.length(), 1)
		{
			if(key[j] == word[i])
			{
				word[i] = '0';
				key[j] = '0';
				break;
			}
		}
		if(word[i] != '0') return false;
	}
	return true;
}

int main() 
{
	while(cin >> key)
	{
		cin >> N;
		W(N)
		{
			cin >> word;
			cout << word;
			cout << ((word.find(key.substr(4, 1)) == string::npos || word.length() < 4 || !validate(key, word)) ? " is invalid\n" : " is valid\n");
		}
	}
	return 0;
}