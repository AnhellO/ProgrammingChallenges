#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <iterator>
#include <locale>
#define W(T) while(T--)
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int N, i;
string word;

bool isVowel(char ch)
{
    const std::string vowels("aeiou");
    return vowels.end() != std::find(vowels.begin(), vowels.end(), ch);
}

int main() 
{
	cin >> N;
	W(N)
	{
		cin >> word;
		if(isVowel(word[0]))
			cout << word << "cow\n";
		else
		{
			FOR(i, 1, word.length(), 1)
				cout << word[i];
			cout << word[0] << "ow\n";
		}
	}
	return 0;
}