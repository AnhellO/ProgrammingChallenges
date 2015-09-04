#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <locale>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int i, contV = 0, contC = 0;
string line;

bool isVowel(char ch)
{
        const std::string vowels("AEIOU");
        return vowels.end() != std::find(vowels.begin(), vowels.end(), ch);
}

int main()
{
	cin >> line;
	FOR(i, 0, line.length(), 1)
		(isVowel(line[i])) ? contV++ : contC++;
	cout << contV << ' ' << contC << '\n';
	return 0;
}