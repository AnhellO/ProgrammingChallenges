#include <cstdio>
#include <vector>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int n, i, temp = 0;

int main() 
{
	scanf("%d", &n);
	vector<int> towers(n);
	FOR(i, 0, n, 1)
	{	
		scanf("%d", &towers[i]);
		if(towers[i] > temp)
				temp = towers[i];
	}
	FOR(i, 0, n, 1)
	{
		printf("%d\n", temp - towers[i]);
	}
	return 0;
}