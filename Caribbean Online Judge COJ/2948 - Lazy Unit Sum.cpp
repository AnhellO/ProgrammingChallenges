#include <iostream>
#include <cstring>
#include <sstream>
using namespace std;
 
int N;
string num;
 
string sumatory(string s)
{
	int i, sum = 0;
	ostringstream ss;
 
	if(s.length() == 1) return s;
	else
	{
		for(i = 0 ; i < s.length() ; i++) sum += (s[i] - '0');
		ss << sum;
		return sumatory(ss.str());
	}
}
 
int main()
{
	cin >> N;
	while(N--)
	{
		cin >> num;
		cout << sumatory(num) << '\n';
	}
	return 0;
}
