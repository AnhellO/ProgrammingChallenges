#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int pos, cont = 0;
string word, line;

int main() 
{
	getline(cin, word);
	while(getline(cin, line))
	{
		if(line.find(word) != string::npos)
		{
			pos = line.find(word);
			while(pos != string::npos)
			{
				cont++;
				line.erase(0, pos + word.length());
				pos = line.find(word);
			}
		}
	}
	cout << cont << '\n';
	return 0;
}