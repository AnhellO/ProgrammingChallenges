#include <cstdio>
#include <vector>
using namespace std;

int n, i, x;

int main()
{
	scanf("%d", &n);
	vector<int> gifts(n);
	for(i = 0 ; i < n ; i++)
	{
		scanf("%d", &x);
		gifts[x - 1] = i + 1;
	}
	printf("%d", gifts[0]);
	for(i = 1 ; i < n ; i++) printf(" %d", gifts[i]);
	printf("\n");
	return 0;
}