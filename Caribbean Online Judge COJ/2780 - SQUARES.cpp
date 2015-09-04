#include <cstdio>
using namespace std;

int N, i, j, cont = 0;
bool flag = false;

int main() 
{
	scanf("%d", &N);
	for(i = 1 ; i < 10000 ; i++)
	{
		for(j = i + 1 ; j < 10000 ; j++)
		{
			//printf("%d %d\n", i * i, j * j);
			if(j * j - i * i > N)
				if(j == i + 1) flag = true;
				else break;
			else if(j * j - i * i < N) continue;
			else
			{
				cont++;
				break;
			}
			if(flag) break;
		}
		if(flag) break;
	}
	printf("%d\n", cont);
	return 0;
}