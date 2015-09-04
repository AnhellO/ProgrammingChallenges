#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

char op;
int T, M, N, Q, a, b, i, j, contB, contQ;
string pirates, temp;

int main() 
{
	cin >> T;
	for(j = 0 ; j < T ; j++)
	{
		cout << "Case " << j + 1 << ":\n";
		cin >> M;
		pirates = "";
		contQ = 0;
		while(M--)
		{
			cin >> N >> temp;
			while(N--) pirates.append(temp);
		}
		cin >> Q;
		while(Q--)
		{
			cin >> op >> a >> b;
			if(op == 'F') replace(pirates.begin() + a, pirates.begin() + b + 1, '0', '1');
			else if(op == 'E') replace(pirates.begin() + a, pirates.begin() + b + 1, '1', '0');
			else if(op == 'I')
				for(i = a ; i <= b ; i++)
					pirates[i] = (pirates[i] == '0') ? '1' : '0';
			else
			{
				contB = 0;
				for(i = a ; i <= b ; i++)
					if(pirates[i] == '1')
						contB++;
				cout << 'Q' << ++contQ << ": " << contB << '\n';
			}
			//cout << pirates << '\n';
		}
	}
	return 0;
}