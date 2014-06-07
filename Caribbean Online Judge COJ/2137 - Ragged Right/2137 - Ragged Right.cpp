#include <iostream>
#include <vector>
using namespace std;

int i, N = 0, raggedness = 0;
string s;
vector<string> lines;

int main()
{
	while(getline(cin, s))
	{
		lines.push_back(s);
		N = (s.length() > N) ? s.length() : N;
	}
	for(i = 0 ; i < lines.size() - 1 ; i++) raggedness += ((N - lines[i].length()) * (N - lines[i].length()));
	cout << raggedness << '\n';
	return 0;
}