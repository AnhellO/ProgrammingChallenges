#include <bits/stdc++.h>
using namespace std;

string A, B;

bool isPalindrome(string s)
{
	int j = s.length() - 1;
	for(int i = 0 ; i <= s.length() / 2 ; i++)
	{
		if(s[i] != s[j])
			return false;
		j--;
	}
}

int main()
{
	cin >> A >> B;
	printf((isPalindrome(A + B)) ? "Yes\n" : "No\n");
	return 0;
}