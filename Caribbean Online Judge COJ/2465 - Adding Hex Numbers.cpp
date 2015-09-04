#include <bits/stdc++.h>
using namespace std;

int N, L1, L2, i, carrie = 0, cont;
string hex1, hex2;

int eval(char c)
{
	if(c == '0') return 0;
	else if(c == '1') return 1;
	else if(c == '2') return 2;
	else if(c == '3') return 3;
	else if(c == '4') return 4;
	else if(c == '5') return 5;
	else if(c == '6') return 6;
	else if(c == '7') return 7;
	else if(c == '8') return 8;
	else if(c == '9') return 9;
	else if(c == 'A') return 10;
	else if(c == 'B') return 11;
	else if(c == 'C') return 12;
	else if(c == 'D') return 13;
	else if(c == 'E') return 14;
	else if(c == 'F') return 15;
}

int main()
{
	cin >> N;
	while(N--)
	{
		cin >> hex1 >> hex2;
		L1 = hex1.length();
		L2 = hex2.length();
		cont = 0;
		if(L1 > L2)
		{
			while(L2 < L1)
			{
				hex2.insert(0, "0");
				L2 = hex2.length();
			}
		}
		else if(L2 > L1)
		{
			while(L1 < L2)
			{
				hex1.insert(0, "0");
				L1 = hex1.length();
			}
		}
		//cout << hex1 << ' ' << hex2 << '\n';
		for(i = L1 - 1 ; i >= 0 ; i--)
		{
			int n1 = eval(hex1[i]), n2 = eval(hex2[i]);
			if(n1 + n2 + carrie < 16) carrie = 0;
			else
			{
				carrie = 1;
				cont++;
			}
		}
		cout << cont << '\n';
	}
	return 0;
}