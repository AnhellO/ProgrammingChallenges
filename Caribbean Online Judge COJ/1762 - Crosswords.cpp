#include <iostream>
#include <string>
using namespace std;

int i, j, sharedIndexY = -1, sharedIndexX = -1;
string A, B;

int main()
{
	cin >> A >> B;
	char crossword[B.length()][A.length()];
	for(i = 0 ; i < A.length() ; i++)
	{
		for(j = 0 ; j < B.length() ; j++)
		{
			if(A[i] == B[j])
			{
				sharedIndexY = i;
				sharedIndexX = j;
				break;
			}
		}
		if(sharedIndexY != -1) break;
	}
	//cout << sharedIndexX << ' ' << sharedIndexY << endl;
	for(i = 0 ; i < B.length() ; i++)
	{
		for(j = 0 ; j < A.length() ; j++)
		{
			if(i == sharedIndexX)
			{
				cout << A;
				break;
			}
			crossword[i][j] = (j == sharedIndexY) ? B[i] : '.';
			cout << crossword[i][j];
		}
		cout << endl;
	}
	return 0;
}