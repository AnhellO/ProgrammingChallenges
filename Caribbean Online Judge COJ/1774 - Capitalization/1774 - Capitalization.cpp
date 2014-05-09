#include <iostream>
#include <cstring>
#include <string>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

string caps;

bool isCorrect(string s)
{
	int i;
	FOR(i, 1, s.length(), 1)
		if(!islower(s[i]))
			return false;
	return true;
}

string toCorrect(string s)
{
	int i;
	if(isCorrect(s)) return s;
	else
		FOR(i, 0, s.length(), 1)
			s[i] = (islower(s[i])) ? toupper(s[i]) : tolower(s[i]);
	return s;
}

int main() 
{
	cin >> caps;
	cout << toCorrect(caps) << '\n';
	return 0;
}