#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
#include <utility>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;
/*
* Author: Angel Santiago Jaime Zavala (AnhellO)
* Caribbean Online Judge COJ: 2708 - False Sense Of Security
*
* Following the simulation of the problem is enough to solve the problem, just support from the morse
* code values stored on arrays, use a pair to manipulate the string and the number
* string generated, and play with some ASCII values to find the correct index in the arrays
*/
string message;
pair<string, string> encoded;
string m[26] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", 
					"....", "..", ".---", "-.-", ".-..", "--", "-.",
					"---", ".--.", "--.-", ".-.", "...", "-", "..-",
					"...-", ".--", "-..-", "-.--", "--.."}; //Alphabet
string p[4] = {"..--", "---.", ".-.-", "----"}; //Puntuation signs
vector<string> morse(m, m + 26);
vector<string> puntuation(p, p + 4);

pair<string, string> encode(string s)
{
	int i;
	string encoded = "", numberStr;
	pair<string, string> message;
	FOR(i, 0, s.length(), 1)
	{
		if(isalpha(s[i]))
		{
			encoded.append(morse[s[i] - 65]); //Find the correct indices
			numberStr.push_back(morse[s[i] - 65].length() + '0');
		}
		else
		{
			if(s[i] == '_') encoded.append("..--"); //Same in puntuation
			else if(s[i] == '.') encoded.append("---.");
			else if(s[i] == ',') encoded.append(".-.-");
			else encoded.append("----");
			numberStr.push_back('4');
		}
	}
	message.first = encoded;
	message.second = string(numberStr.rbegin(), numberStr.rend());
	return message;
}

string decode(pair<string, string> p)
{
	int i;
	vector<string>::iterator pos;
	string subS, decoded;
	FOR(i, 0, p.second.length(), 1)
	{
		subS = p.first.substr(0, p.second[i] - '0');
		pos = find(morse.begin(), morse.end(), subS);
		if(pos != morse.end())
			decoded.push_back((pos - morse.begin()) + 65);
		else
		{
			pos = find(puntuation.begin(), puntuation.end(), subS);
			if(pos - puntuation.begin() == 0) decoded.push_back('_');
			else if(pos - puntuation.begin() == 1) decoded.push_back('.');
			else if(pos - puntuation.begin() == 2) decoded.push_back(',');
			else decoded.push_back('?');
		}
		p.first.erase(0, p.second[i] - '0');
	}
	return decoded;
}

int main() 
{
	while(getline(cin, message))
	{
		encoded = encode(message);
		cout << decode(encoded) << '\n';
		//cout << encoded.first << ' ' << encoded.second << '\n';
	}
	return 0;
}