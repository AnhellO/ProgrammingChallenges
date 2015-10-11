#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
 
int N, P;
 
int main()
{
	while(scanf("%d", &N) && N)
	{
		scanf("%d", &P);
		vector<int> mPages;
		mPages.push_back((P % 2) ? P + 1 : P - 1);
		if((N - P) % 2)
		{
			mPages.push_back(N - P);
			mPages.push_back(N - P + 1);
		}
		else
		{
			mPages.push_back(N - P + 1);
			mPages.push_back(N - P + 2);
		}
		sort(mPages.begin(), mPages.end());
		printf("%d %d %d\n", mPages[0], mPages[1], mPages[2]);
	}
	return 0;
}
