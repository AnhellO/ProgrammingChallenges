#include <iostream>
#include <cstring>
#include <string>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int N, i;
string bin1, bin2;

int main() 
{
	cin >> N >> bin1 >> bin2;
	if(N % 2)
	{	
		FOR(i, 0, bin1.length(), 1)
			if(bin1[i] == bin2[i])
			{	
				cout << "Deletion failed\n";
				break;
			}
		if(i == bin1.length()) cout << "Deletion succeeded\n";
	}
	else
		cout << ((bin1.compare(bin2) != 0) ? "Deletion failed\n" : "Deletion succeeded\n");
	return 0;
}