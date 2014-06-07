#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int N;
string number;

bool isPalindrome(string s)
{
	int i, j = s.length() - 1;
	for(i = 0 ; i < s.length() / 2 ; i++)
	{
		if(toupper(s[i]) != toupper(s[j])) return false;
		j--;
	}
	return true;
}

string toNumber(string s)
{
	int i;
	char c;
	string ret;
	for(i = 0 ; i < s.length() ; i++)
	{
		c = toupper(s[i]);
		if(c >= 65 && c <= 67) ret.push_back('2');
		else if(c >= 68 && c <= 70) ret.push_back('3');
		else if(c >= 71 && c <= 73) ret.push_back('4');
		else if(c >= 74 && c <= 76) ret.push_back('5');
		else if(c >= 77 && c <= 79) ret.push_back('6');
		else if(c >= 80 && c <= 83) ret.push_back('7');
		else if(c >= 84 && c <= 86) ret.push_back('8');
		else ret.push_back('9');
	}
	return ret;
}

int main()
{
	cin >> N;
	while(N--)
	{
		cin >> number;
		number = toNumber(number);
		cout << (isPalindrome(number) ? "YES\n" : "NO\n");
	}
	return 0;
}