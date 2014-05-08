#include <iostream>
#include <cstring>
#include <string>
#include <vector>
using namespace std;
/*
* Author: Angel Santiago Jaime Zavala (AnhellO)
* Caribbean Online Judge COJ: 1589 - In Braille
*
* We will save the digits in its Braille representation just in two parts: the upper part, and the half part, the lower part
* will not be necessary because all digits have the same lower representation of "..", and we'll start from 0 to 9, to move
* between them
* Here we just have to deal with the input, principally when we must read Braille representation
*
* From number to Braille:
* It's easy when we deal with a number string, we just iterate over it and check
* what digit is, searching for that number on the upper and half parts, and printing them in order, at the end we just print
* the ".." lower part
*
* From Braille to number:
* Using getline we'll save the lines, and splitting them with a split implementation made on C++, passing the resulting vector
* as a parameter. In the function we just have to validate when the upper and half part are in the same index, if they are in, the index
* position will be the resulting digit for every Braille digit
*/
string line, op;
vector<string> upper, half;
string upperBraille[] = {".*", "*.", "*.", "**", "**",
						 "*.", "**", "**", "*.", ".*"};
string halfBraille[] = {"**", "..", "*.", "..", ".*",
						 ".*", "*.", "**", "**", "*."};

vector<string> split(string s, string regex) //Split implementation
{
	vector<string> sections;
	int pos = s.find_first_of(regex);
	string subS;

	while(pos != string::npos)
	{
		subS = s.substr(0, pos);
		s.erase(0, pos + 1);
		sections.push_back(subS);
		pos = s.find_first_of(regex);
	}
	sections.push_back(s);
	return sections;
}

void toBraille(string s) //from number to Braille, just print part by part
{
	int i, N = s.length();
	for(i = 0 ; i < N - 1 ; i++)
		cout << upperBraille[s[i] - '0'] << ' '; //Searching for the upper part, we get the Integer representation of the digit
	cout << upperBraille[s[i] - '0'] << '\n';
	for(i = 0 ; i < N - 1 ; i++)
		cout << halfBraille[s[i] - '0'] << ' '; //Half part
	cout << halfBraille[s[i] - '0'] << '\n';
	for(i = 0 ; i < N - 1 ; i++)
		cout << ".." << ' '; //Just print lower part, same on all digits
	cout << ".." << '\n';
}

void toDigit(vector<string> u, vector<string> h) //from Braille to digit
{
	int i, j;
	for(i = 0 ; i < u.size() ; i++)
	{
		for(j = 0 ; j < 10 ; j++)
		{
			if(u[i] == upperBraille[j] && h[i] == halfBraille[j]) //If upper and half are in the same index...
			{
				cout << j; //print index
				break;
			}
		}
	}
	cout << '\n';
}

int main()
{
	while(getline(cin, line) && line != "0")
	{
		getline(cin, op);
		if(op == "S") //If "S" then cast from number to Braille
		{
			getline(cin, line);
			toBraille(line);
		}
		else //if not, split line by line (except for the last one), and cast from Braille to number
		{
			getline(cin, line);
			upper = split(line, " ");
			getline(cin, line);
			half = split(line, " ");
			getline(cin, line);
			toDigit(upper, half);
		}
	}
	return 0;
}
