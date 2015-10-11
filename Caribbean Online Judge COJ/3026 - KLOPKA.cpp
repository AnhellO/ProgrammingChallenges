#include <cstdio>
#include <algorithm>
using namespace std;
 
int N, i, x, y, mX = 101, mY = 101, MX = 0, MY = 0;
 
int main()
{
	scanf("%d", &N);
	for(i = 0 ; i < N ; i++)
	{
	    scanf("%d %d", &x, &y);
	    mX = min(mX, x);
	    mY = min(mY, y);
	    MX = max(MX, x);
	    MY = max(MY, y);
	}
	printf("%d\n", max(MX - mX, MY - mY) * max(MX - mX, MY - mY));
	return 0;
}