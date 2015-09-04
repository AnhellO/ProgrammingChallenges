#include <cstdio>
#include <vector>
#define FOR1(i, a, b, c) for(i = a ; i < b ; i += c)
#define FOR2(i, a, b, c) for(i = a ; i > b ; i -= c)
using namespace std;

int c, i, j, cont = 0, aux;
bool compMax, compMin;

int main() 
{
	scanf("%d", &c);
	vector<int> contests(c);
	FOR1(i, 0, c, 1)
	{
		scanf("%d", &contests[i]);
	}
	FOR1(i, 1, c, 1)
	{
		compMax = compMin = false;
		FOR2(j, i, 0, 1)
		{
			if(contests[i] <= contests[j - 1]) 
			{
				compMax = true;
				break;
			}
		}
		FOR2(j, i, 0, 1)
		{
			if(contests[i] >= contests[j - 1]) 
			{
				compMin = true;
				break;
			}
		}
		if(!compMin || !compMax) cont++;
	}
	printf("%d\n", cont);
	return 0;
}