#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int pos;
string line;

int main() 
{
	while(getline(cin, line))
	{
		pos = line.find("BUG");
		while(pos != string::npos)
		{
			line = line.substr(0, pos).append(line.substr(pos + 3));
			pos = line.find("BUG");
		}
		cout << line << '\n';
	}
	return 0;
}