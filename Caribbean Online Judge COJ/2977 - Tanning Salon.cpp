#include <iostream>
#include <string>
using namespace std;
 
int N, i, contUnsatisfied;
string s, oBeds, waiting;
 
int main()
{
	while(cin >> N && N)
	{
		cin >> s;
		oBeds.clear();
		waiting.clear();
		contUnsatisfied = 0;
		for(i = 0 ; i < s.length() ; i++)
		{
			if(oBeds.find(s[i]) == string::npos)
			{
				if(N) N--, oBeds.push_back(s[i]);
				else
				{
					if(waiting.find(s[i]) == string::npos) waiting.push_back(s[i]);
					else contUnsatisfied++;
				}
			}
			else
			{
				N++;
			}
		}
		if(!contUnsatisfied) cout << "All customers tanned successfully.\n";
		else cout << contUnsatisfied << " customer(s) walked away.\n";
	}
	return 0;
}
