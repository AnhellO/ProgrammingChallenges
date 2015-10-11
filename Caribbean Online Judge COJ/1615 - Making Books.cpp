#include <cstdio>
#include <sstream>
#include <vector>
#include <cstring>
using namespace std;

int A, B, i, j, N = 0, temp;
string s;

string toString(int N)
{
	ostringstream ss;
	ss << N;
	return ss.str();
}

int main()
{
	while(scanf("%d", &A) && A)
	{
		scanf("%d", &B);
		if(A > B)
		{
			temp = A;
			A = B;
			B = temp;
		}
		vector<int> digits(10, 0);
		for(i = A ; i <= B ; i++)
		{
			s = toString(i);
			for(j = 0 ; j < s.length() ; j++) digits[s[j] - '0']++;
		}
		printf("Case %d: 0:%d", ++N, digits[0]);
		for(i = 1 ; i < 10 ; i++)
		{
			printf(" %d:%d", i, digits[i]);
		}
		printf("\n");
	}
	return 0;
}