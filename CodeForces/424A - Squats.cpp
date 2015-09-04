#include <cstdio>
using namespace std;

int N, i, contx, contX, temp;

int main() 
{
	scanf("%d", &N);
	char hamsters[N];
	scanf("%s", &hamsters);
	for(i = 0 ; i < N ; i++)
		(hamsters[i] == 'x') ? contx++ : contX++;
	if(contx == contX) printf("%d\n%s\n", 0, hamsters);
	else if(contx < contX)
	{
		temp = (contX - contx) / 2;
		printf("%d\n", temp);
		for(i = 0 ; i < N ; i++)
		{
			if(!temp) break;
			if(hamsters[i] == 'X') 
			{
				hamsters[i] = 'x';
				temp--;
			}
		}
		printf("%s\n", hamsters);
	}
	else
	{
		temp = (contx - contX) / 2;
		printf("%d ", temp);
		for(i = 0 ; i < N ; i++)
		{
			if(!temp) break;
			if(hamsters[i] == 'x') 
			{
				hamsters[i] = 'X';
				temp--;
			}
		}
		printf("%s\n", hamsters);
	}
	return 0;
}