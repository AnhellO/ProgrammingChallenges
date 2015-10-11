#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int i, j, S, sumO, sumE, C;
string N;

int main()
{
	for(i = 1 ; cin >> N ; i++)
	{
		N.replace(1, 1, "");
		N.replace(6, 1, "");
		sumO = sumE = 0;
		for(j = 0 ; j < N.length() ; j++)
			(j % 2 == 0) ? sumO += (N[j] - '0') : sumE += (N[j] - '0');
		sumO *= 3;
		S = sumO + sumE;
		for(j = 0 ; j <= 9 ; j++)
		{
			if((j + S) % 10 == 0)
			{
				C = j;
				break;
			}
		}
		cout << "Case #" << i << ": " << C << '\n';
	}
	return 0;
}