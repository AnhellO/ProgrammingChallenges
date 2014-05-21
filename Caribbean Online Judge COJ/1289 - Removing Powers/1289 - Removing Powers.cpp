#include <cstdio>
#include <vector>
using namespace std;

int N, i, deleted;

bool isPower(int x) 
{
    return !(x == 0) && !(x & (x - 1));
}

int main() 
{
	while(scanf("%d", &N) != EOF)
	{
		if(N == 1)
		{
			printf("%d\n", 1);
			continue;
		}
		else if(N == 2)
		{
			printf("%d\n", 2);
			continue;
		}
		vector<int> A(N), B;
		for(i = 0 ; i < N ; i++) A[i] = i + 1;
		while(A.size() > 3)
		{
			for(i = 0 ; i < A.size() ; i++)
				if(!isPower(i + 1))
					B.push_back(A[i]);
			A = B;
			B.clear();
		}
		printf("%d\n", A[A.size() - 1]);
	}
	return 0;
}