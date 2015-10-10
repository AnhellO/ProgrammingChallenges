#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int N;
string s = "- -   - -         - -   - -";

string cantor(int N, string s)
{
	if(N == 3) return s;
	string temp = s;
	temp.append(s.length(), ' ');
	return cantor(N - 1, temp + s);
}

int main()
{
	while(cin >> N)
	{
		if(N == 0) cout << "-\n";
		else if(N == 1) cout << "- -\n";
		else if(N == 2) cout << "- -   - -\n";
		else if(N == 3) cout << "- -   - -         - -   - -\n";
		else cout << cantor(N, s) << '\n';
	}
	return 0;
}