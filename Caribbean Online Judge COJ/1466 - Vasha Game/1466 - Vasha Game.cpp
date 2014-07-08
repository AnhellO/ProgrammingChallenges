#include <cstdio>
using namespace std;

int X, Y, sum;
bool flag = true;

int main()
{
	scanf("%d %d", &X, &Y);
	while(true)
	{
		sum = 0;
		if(flag)
		{
			if(X >= 2) X -= 2, sum = 200;
			if(Y >= 2 && sum == 200) Y -= 2, sum += 20;
			if(X == 1 && !sum) X--, sum = 100;
			if(Y >= 12 && sum == 100) Y -= 12, sum += 120;
			if(!X && Y >= 22 && !sum) Y -= 22, sum = 220;
			if(sum < 220)
			{
				printf("Golek\n");
				break;
			}
			flag = false;
		}
		else
		{
			if(Y >= 22) Y -= 22, sum = 220;
			if(X && !sum && Y >= 12) X--, sum = 100;
			if(Y >= 12 && sum == 100) Y -= 12, sum += 120;
			if(X >= 2 && !sum) X -= 2, sum = 200;
			if(Y >= 2 && sum == 200) Y -= 2, sum += 20;
			if(sum < 220)
			{
				printf("Vasha\n");
				break;
			}
			flag = true;
		}
	}
	return 0;
}