#include <iostream>
#include <string>
using namespace std;

string s;

int main()
{
	while(getline(cin, s))
	{
		cout << "\"" << s << "\" tiene " << s.length() << " caracteres\n" ;
	}
	return 0;
}