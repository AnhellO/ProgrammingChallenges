#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int i, degree, sum;
string s;
bool flag;

int main()
{
	while(cin >> s && s != "0")
	{
		if(s.length() == 1 && s == "9") 
		{
			cout << "9 is a multiple of 9 and has 9-degree 1.\n";
			continue;
		}
		else if(s.length() == 1 && s != "9") 
		{
			cout << s << " is not a multiple of 9.\n";
			continue;
		}
		cout << s << ' ';
		degree = 0;
		flag = 1;
		while(s.length() > 1)
		{
			sum = 0;
			for(i = 0 ; i < s.length() ; i++)
				sum += (s[i] - '0');
			if(sum % 9 && flag) flag = 0;
			ostringstream ss;
			ss << sum;
			s = ss.str();
			degree++;
		}
		if(flag) cout << "is a multiple of 9 and has 9-degree " << degree << ".\n";
		else cout << "is not a multiple of 9.\n";
	}
	return 0;
}