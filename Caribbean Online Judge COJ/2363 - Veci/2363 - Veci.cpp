#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <sstream>
#include <vector>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int i, newN, newComp, temp, may = 0;
string n, out = "", aux;
stringstream ss;
vector<string> permutations;

bool checkRepeated(string n)
{
	int i;
	FOR(i, 0, n.size(), 1)
		if(n[i] != n[i + 1])
			return false;
	return true;
}

int checkMajDigits(string n, string val)
{
	int i, cont = 0;
	FOR(i, 0, n.length(), 1)
	{	//cout << cont << " ";
		if(val[i] == n[i])
	 		cont++;}
	//cout << ' ' << n << ' ' << val << '\n';
	return cont;
}

int main() 
{
	cin >> n;
	aux = n;
	if(checkRepeated(n))
		cout << 0 << '\n';
	else if(n.length() == 2 && !checkRepeated(n))
	{
		out.push_back(n[1]);
		out.push_back(n[0]);
		ss.clear();
		ss << n;
		ss >> newN;
		ss.clear();
		ss << out;
		ss >> newComp;
		cout << out;
		(newComp > newN) ? cout << newComp << '\n' : cout << newN << '\n';
	}
	else
	{
		ss.clear();
		ss << n;
		ss >> newN;
		sort(n.begin(), n.end());
		do
		{
			ss.clear();
			ss << n;
			ss >> newComp;
			if(newComp > newN)
			{
				permutations.push_back(n);
			}
		}while(next_permutation(n.begin(), n.end()));
		FOR(i, 0, permutations.size(), 1)
		{
			
			temp = checkMajDigits(aux, permutations[i]);
			//cout << '(' << permutations[i] << ' ' << temp << ')';
			if(temp > may)
			{
				may = temp;
				out = permutations[i];
			}
		}
		cout << out << '\n';
	}
	return 0;
}