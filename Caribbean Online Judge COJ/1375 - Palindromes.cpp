#include <bits/stdc++.h>
using namespace std;

string s;
bool f1, f2;

bool isPalindrome(string s)
{
	int i, j;
	for(i = 0, j = s.length() - 1 ; i <= j ; i++, j--)
		if(s[i] != s[j]) return false;
		//printf("%c %c\n", s[i], s[j]);
	return true;
}

bool isMirrored(string s)
{
	int i, j;
	string ab = "BCDFGKNPQRS4679";
	for(i = 0, j = s.length() - 1 ; i <= j ; i++, j--)
	{
		if(ab.find(s[i]) != string::npos) return false;
		if(s[i] == 'A' && s[j] != 'A') return false;
		else if(s[i] != 'A' && s[j] == 'A') return false;
		else if(s[i] == 'E' && s[j] != '3') return false;
		else if(s[i] != 'E' && s[j] == '3') return false;
		else if(s[i] == 'H' && s[j] != 'H') return false;
		else if(s[i] != 'H' && s[j] == 'H') return false;
		else if(s[i] == 'I' && s[j] != 'I') return false;
		else if(s[i] != 'I' && s[j] == 'I') return false;
		else if(s[i] == 'J' && s[j] != 'L') return false;
		else if(s[i] != 'J' && s[j] == 'L') return false;
		else if(s[i] == 'L' && s[j] != 'J') return false;
		else if(s[i] != 'L' && s[j] == 'J') return false;
		else if(s[i] == 'M' && s[j] != 'M') return false;
		else if(s[i] != 'M' && s[j] == 'M') return false;
		else if(s[i] == 'O' && s[j] != 'O') return false;
		else if(s[i] != 'O' && s[j] == 'O') return false;
		else if(s[i] == 'S' && s[j] != '2') return false;
		else if(s[i] != 'S' && s[j] == '2') return false;
		else if(s[i] == 'T' && s[j] != 'T') return false;
		else if(s[i] != 'T' && s[j] == 'T') return false;
		else if(s[i] == 'U' && s[j] != 'U') return false;
		else if(s[i] != 'U' && s[j] == 'U') return false;
		else if(s[i] == 'V' && s[j] != 'V') return false;
		else if(s[i] != 'V' && s[j] == 'V') return false;
		else if(s[i] == 'W' && s[j] != 'W') return false;
		else if(s[i] != 'W' && s[j] == 'W') return false;
		else if(s[i] == 'X' && s[j] != 'X') return false;
		else if(s[i] != 'X' && s[j] == 'X') return false;
		else if(s[i] == 'Y' && s[j] != 'Y') return false;
		else if(s[i] != 'Y' && s[j] == 'Y') return false;
		else if(s[i] == 'Z' && s[j] != '5') return false;
		else if(s[i] != 'Z' && s[j] == '5') return false;
		else if(s[i] == '1' && s[j] != '1') return false;
		else if(s[i] != '1' && s[j] == '1') return false;
		else if(s[i] == '2' && s[j] != 'S') return false;
		else if(s[i] != '2' && s[j] == 'S') return false;
		else if(s[i] == '3' && s[j] != 'E') return false;
		else if(s[i] != '3' && s[j] == 'E') return false;
		else if(s[i] == '5' && s[j] != 'Z') return false;
		else if(s[i] != '5' && s[j] == 'Z') return false;
		else if(s[i] == '8' && s[j] != '8') return false;
		else if(s[i] != '8' && s[j] == '8') return false;
		//printf("%c %c\n", s[i], s[j]);
	}
	return true;
}

int main()
{
	while(cin >> s)
	{
		cout << s << " -- ";
		f1 = isPalindrome(s);
		f2 = isMirrored(s);
		if(!f1 && !f2) cout << "is not a palindrome.\n\n";
		else if(f1 && !f2) cout << "is a regular palindrome.\n\n";
		else if(!f1 && f2) cout << "is a mirrored string.\n\n";
		else cout << "is a mirrored palindrome.\n\n";
	}
	return 0;
}