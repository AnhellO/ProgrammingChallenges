#include <iostream>
#include <cstring>
#include <algorithm>
#define W(N) while(N--)
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int i, N;
string word, out;

int main() 
{
	while(cin >> word)
	{
		cout << '\n';
		out = word;
		sort(word.begin(), word.end());
		cin >> N;
		W(N)
		{
			FOR(i, 0, word.length(), 1)
			{
				int partition;
				cin >> partition;
				out[partition - 1] = word[i];
			}
			cout << out << '\n';
		}
	}
	return 0;
}