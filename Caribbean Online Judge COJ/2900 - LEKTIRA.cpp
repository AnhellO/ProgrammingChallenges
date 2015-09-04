#include <iostream>
#include <string>
using namespace std;

string s;

string lexBiggest(string s)
{
	int i, j, N;
	string s1, s2, s3, maxi = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", final;
	N = s.length();
	for(i = 1 ; i < N ; i++)
	{
		for(j = i + 1 ; j < N ; j++)
		{
			s1 = s.substr(0, i);
			s2 = s.substr(i, j - i);
			s3 = s.substr(j);
			final = string(s1.rbegin(), s1.rend()) + string(s2.rbegin(), s2.rend()) + string(s3.rbegin(), s3.rend());
			//cout << final << '\n';
			if(final < maxi) maxi = final;
		}
	}
	return maxi;
}

int main() 
{
	cin >> s;
	cout << lexBiggest(s);
	return 0;
}