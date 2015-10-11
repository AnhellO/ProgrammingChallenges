#include <iostream>
#include <cstring>
using namespace std;

#define ciclo(i, a, b, c) for(i = a ; i < b ; i += c)
int dialT, i;
string word;

int main() 
{
	dialT = 0;
	while(cin >> word)
	{
		ciclo(i, 0, word.length(), 1)
		{
			if(word.at(i) == 'A' || word.at(i) == 'B' || word.at(i) == 'C')
				dialT += 3;
			else if(word.at(i) == 'D' || word.at(i) == 'E' || word.at(i) == 'F')
				dialT += 4;
			else if(word.at(i) == 'G' || word.at(i) == 'H' || word.at(i) == 'I')
				dialT += 5;	
			else if(word.at(i) == 'J' || word.at(i) == 'K' || word.at(i) == 'L')
				dialT += 6;
			else if(word.at(i) == 'M' || word.at(i) == 'N' || word.at(i) == 'O')
				dialT += 7;
			else if(word.at(i) == 'P' || word.at(i) == 'Q' || word.at(i) == 'R' || word.at(i) == 'S')
				dialT += 8;
			else if(word.at(i) == 'T' || word.at(i) == 'U' || word.at(i) == 'V')
				dialT += 9;
			else if(word.at(i) == 'W' || word.at(i) == 'X' || word.at(i) == 'Y' || word.at(i) == 'Z')
				dialT += 10;
		}
		cout << dialT << endl;
	}
	return 0;
}