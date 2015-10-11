#include <iostream>
#include <algorithm>
#include <sstream>
#include <cctype>
#define W(T) while(T--)
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

string drinks[11] = {"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", 
					"SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};
int T, N, i, newN, cont;
string line, val;

int toInteger(string n)
{
	int newN;
	stringstream ss;
	ss << n;
	ss >> newN;
	return newN;
}

int main() 
{
	cin >> T;
	W(T)
	{
		cin >> N;
		cont = 0;
		FOR(i, 0, N, 1) 
		{
			cin >> val;
			if(isdigit(val[0]))
			{
				newN = toInteger(val);
				if(newN < 18) cont++;
			}
			else
				if(binary_search(drinks, drinks + 11, val)) cont++;
		}
		cout << cont <<'\n';
	}
	return 0;
}