#include <cstdio>
using namespace std;
 
int n;
int ciclo(int);
 
int main() 
{
	do
	{
		scanf("%d",&n);
		if(n == 0)
			break;
		printf("%d\n",ciclo(n));
	}while(true);
	return 0;
}
 
int ciclo(int num)
{
	int mayor = num;
	while (num != 1)
    {
		if (num % 2 == 1) 
			num = num * 3 + 1;
		else 
			num = num >> 1;
		if (num > mayor) 
			mayor = num;
	}
	return mayor;
}