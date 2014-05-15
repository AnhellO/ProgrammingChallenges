#include <iostream>
using namespace std;

string n;

int main() 
{
	while(cin >> n)
	{
		if(n == "END") break;
		
		if(n == "1")
			cout << n << endl;
		else if(n.length() < 2 && n != "1")
			cout << "2" << endl;
		else if(n.length() < 10)
			cout << "3" << endl;
		else
			cout << "4" << endl;
	}
	return 0;
}