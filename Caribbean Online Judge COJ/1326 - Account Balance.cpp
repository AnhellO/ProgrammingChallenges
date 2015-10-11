#include <iostream>
using namespace std;

int t, balance, d, amount;
char mov;

int main()
{
	cin >> t;
	while(t--)
	{
		cin >> balance >> d;
		while(d--)
		{
			cin >> mov >> amount;
			balance = (mov == 'C') ? balance + amount : balance - amount;
		}
		cout << balance << endl;
	}
	return 0;
}