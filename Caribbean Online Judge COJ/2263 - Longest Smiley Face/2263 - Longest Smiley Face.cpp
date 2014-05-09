#include <iostream>
#include <cstring>
#include <string>
#define W(T) while(T--)
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int T, i, pos, contAlan, contJennifer;
string smiley, subS;

int main() 
{
	cin >> T;
	W(T)
	{
		cin >> smiley;
		contAlan = contJennifer = i = 0;
		pos = smiley.find("):");
		while(pos != string::npos)
		{
			subS = smiley.substr(0, pos + 1);
			smiley.erase(0, pos + 1);
			//cout << subS << '\n';
			pos = smiley.find("):");
			if(i % 2 == 0)
				if(subS.length() > contJennifer)
					contJennifer = subS.length();
			else
				if(subS.length() > contAlan)
					contAlan = subS.length();
			i++;
		}
		if(smiley.length() > contAlan)
			contAlan = smiley.length();
		cout << ((contJennifer > contAlan) ? "Jennifer\n" : "Alan\n");
	}
	return 0;
}