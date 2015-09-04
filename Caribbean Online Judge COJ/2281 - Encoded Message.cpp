#include <iostream>
#include <cmath>
#define W(T) while(T--)
#define FOR1(i, a, b, c) for(i = a ; i < b ; i += c)
#define FOR2(i, a, b, c) for(i = a ; i >= b ; i -= c)
#define MAXN 11
using namespace std;

int T, i, j, N, cont = 0;
string message;

int main() 
{
	cin >> T;
	W(T)
	{
		cin >> message;
		N = (int)sqrt(message.length());
		char matrix[N][N];
		char decode[N][N];
		cont = 0;
		FOR1(i, 0, N, 1)
			FOR1(j, 0, N, 1)
			{
				matrix[i][j] = message[cont];
				cont++;
			}
		cont = 0;
		FOR2(i, N - 1, 0, 1)
	    	{
	        	FOR1(j, 0, N, 1)
	            		decode[cont][j] = matrix[j][i];
	        	cont++;
	    	}
	    	FOR1(i, 0, N, 1)
			FOR1(j, 0, N, 1)
				cout << decode[i][j];
		cout << endl;
	}
	return 0;
}
