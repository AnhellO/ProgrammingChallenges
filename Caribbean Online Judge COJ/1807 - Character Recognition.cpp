#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

int N, i, cR, L;
string line, text = "";

int toInteger(string s)
{
	int N;
	stringstream ss;
	ss << s;
	ss >> N;
	return N;
}

int main()
{
	
	getline(cin, line);
	N = toInteger(line);
	while(N)
	{
		getline(cin, line);
		if(line.empty())
		{
			N--;
			L = text.length();
			cR = 0;
			for(i = 0 ; i < L ; i++)
				if(text[i] != '#') cR++;
			cout << "Efficiency ratio is ";
			if(cR % L)
				cout << setprecision(3) << ((double)cR / (double)L) * 100.0 << "%.\n";
			else
				cout << (cR / L) * 100 << "%.\n";
			text = "";
		}
		else
		{
			text.append(line);
		}
	}
	return 0;
}