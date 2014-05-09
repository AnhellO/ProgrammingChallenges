#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <iterator>
#include <locale>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int i;
string password;

bool isVowel(char ch)
{
    const std::string vowels("aeiou");
    return vowels.end() != std::find(vowels.begin(), vowels.end(), ch);
}

bool containVowel(string s)
{
	int i;
	FOR(i, 0, s.length(), 1)
		if(isVowel(s[i])) return true;
	return false;
}

bool solve(string s)
{
	int t;
	FOR(i, 0, s.length() - 2, 1)
	{
		if(isVowel(s[i]) && isVowel(s[i + 1]) && isVowel(s[i + 2])) return false;
		if(!isVowel(s[i]) && !isVowel(s[i + 1]) && !isVowel(s[i + 2])) return false;
	}
	FOR(i, 0, s.length() - 1, 1)
		if(s[i] == s[i + 1] && s[i] != 'e' && s[i] != 'o') return false;
	return true;
}

int main() 
{
	while(cin >> password)
	{
		if(password == "end") break;
		if(password.length() == 1 || (containVowel(password) && solve(password)))
			cout << '<' << password << '>' << " is acceptable.\n";
		else
			cout << '<' << password << '>' << " is not acceptable.\n";
	}
	return 0;
}