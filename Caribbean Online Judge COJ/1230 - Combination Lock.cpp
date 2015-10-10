#include <cstdio>
using namespace std;

int start, _1, _2, _3, degrees;

int main()
{
	while(scanf("%d %d %d %d", &start, &_1, &_2, &_3) && _1 + _2 + _3)
	{
		degrees = 1080;
		degrees += (((40 - _1 + start) % 40) * 9);
		degrees += (((40 - _1 + _2) % 40) * 9);
		degrees += (((40 - _3 + _2) % 40) * 9);
		printf("%d\n", degrees);
	}
	return 0;
}