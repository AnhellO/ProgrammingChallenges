#include <iostream>
#include <cstring>
#include <string>
#include <sstream>
using namespace std;
/*
* Author: Angel Santiago Jaime Zavala (AnhellO)
* Caribbean Online Judge COJ: 2846 - ID Key
*
* Follow the rules to create the ID Key, and support from string methods.
*/
int N, id;
string citizen, key;

int toInteger(string s)
{
	int N;
	stringstream ss;
	ss << s;
	ss >> N;
	return N;
}

string toString(int N)
{
	stringstream ss;
	ss << N;
	return ss.str();
}

int getSum(string s)
{
	int i, sum = 0;
	for(i = 0 ; i < s.length() ; i++)
		sum += (s[i] - '0');
	return sum;
}

int main() 
{
	cin >> N;
	while(N--)
	{
		cin >> citizen;
		id = getSum(citizen) + (toInteger(citizen.substr(citizen.length() - 3, 3)) * 10);
		if(id < 1000) id += 1000;
		key = toString(id);
		cout << ((key.length() == 4) ? key : key.substr(key.length() - 4, 4)) << '\n';
	}
	return 0;
}