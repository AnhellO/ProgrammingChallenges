#include <cstdio>
#include <vector>
using namespace std;

int A, C, i, total;

int main()
{
	while(scanf("%d %d", &A, &C) && (A && C))
	{
		vector<int> sculpture(C);
		total = 0;
		scanf("%d", &sculpture[0]);
		for(i = 1 ; i < C ; i++)
		{
			scanf("%d", &sculpture[i]);
			if(sculpture[i] > sculpture[i - 1]) total += sculpture[i] - sculpture[i - 1];
		}
		total += A - sculpture[i - 1];
		printf("%d\n", total);
	}
	return 0;
}