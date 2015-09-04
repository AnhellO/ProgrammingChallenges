#include <iostream>
#include <vector>
#define W(T) while(T--)
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int T, N, i;

bool isPerfectSquare(vector<string> squares)
{
	int i, j;
	FOR(i, 0, squares.size(), 1)
	{
		FOR(j, 0, squares[i].length(), 1)
		{
			if(squares[i][j] == squares[i][j + 1])
				return false;
			if(i < squares.size() - 1)
				if(squares[i][j] == squares[i + 1][j])
					return false;
		}
	}
	return true;
}

int main() 
{
	cin >> T;
	W(T)
	{
		cin >> N;
		vector<string> squares(N);
		FOR(i, 0, N, 1)
			cin >> squares[i];
		cout << ((isPerfectSquare(squares)) ? "YES\n" : "NO\n");
	}
	return 0;
}