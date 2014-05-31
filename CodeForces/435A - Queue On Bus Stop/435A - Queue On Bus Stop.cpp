#include <cstdio>
using namespace std;
 
int N, M, i, j, carries, cont = 0;

int main() 
{
	scanf("%d %d", &N, &M);
	int queues[N];
	for(i = 0 ; i < N ; i++) scanf("%d", &queues[i]);
	for(i = 0 ; i < N ; i++)
	{
		carries = 0;
		for(j = i; j < N ; j++)
		{
			if(carries + queues[j] <= M) carries += queues[j];
			else break;
		}
		cont++;
		i = j - 1;
	}
	printf("%d\n", cont);
	return 0;
}