#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

int i, j;
string A, B, s;

int main()
{
	while(cin >> A >> B)
	{
		s = "";
		vector<bool> validate(1001, 0);
		for(i = 0 ; i < A.length() ; i++)
		{
			for(j = 0 ; j < B.length() ; j++)
			{
				if(A[i] == B[j] && !validate[j])
				{
					s += A[i];
					validate[j] = 1;
					break;
				}
			}
		}
		sort(s.begin(), s.end());
		cout << s << '\n';
	}
	return 0;
}